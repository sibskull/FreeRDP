Name: freerdp
Version: 0.7.2
Release: alt1
License: GPLv2
Group: Networking/Remote access
Summary: Remote Desktop Protocol functionality
Url: http://freerdp.sourceforge.net/
Source: http://downloads.sourceforge.net/%name/%name-%version.tar.gz

BuildRequires: openssl-devel libX11-devel libXcursor-devel cups-devel zlib-devel

%description
freerdp implements Remote Desktop Protocol (RDP), used in a number of Microsoft
products.

%package -n xfreerdp
Summary: Remote Desktop Protocol client
Group: Networking/Remote access
Requires: lib%name = %version-%release, %name-plugins-standard = %version-%release
%description -n xfreerdp
xfreerdp is a client for Remote Desktop Protocol (RDP), used in a number of
Microsoft products.

%package -n lib%name
Summary: Core libraries implementing the RDP protocol
Group: Networking/Remote access
%description -n lib%name
libfreerdp can be embedded in applications.

libfreerdpchanman and libfreerdpkbd might be convenient to use in X
applications together with libfreerdp.

libfreerdp can be extended with plugins handling RDP channels.

%package plugins-standard
Summary: Plugins for handling the standard RDP channels
Group: Networking/Remote access
Requires: lib%name = %version-%release
%description plugins-standard
A set of plugins to the channel manager implementing the standard virtual
channels extending RDP core functionality.  For example, sounds, clipboard
sync, disk/printer redirection, etc.

%package devel
Summary: Libraries and header files for embedding and extending freerdp
Group: Development/Other
Requires: lib%name = %version-%release
Requires: pkgconfig
%description devel
Header files and unversioned libraries for libfreerdp, libfreerdpchanman and
libfreerdpkbd.

%prep
%setup -q
echo %version > .tarball-version

%build
%autoreconf
%configure --enable-smartcard --with-sound --with-crypto=openssl --with-gnu-ld
%make_build

%install
%makeinstall_std
rm -f $RPM_BUILD_ROOT%_libdir/{freerdp/,lib}*.{a,la} # FIXME: They shouldn't be installed in the first place

%files -n xfreerdp
%_bindir/xfreerdp
%_mandir/*/*

%files -n lib%name
%doc COPYING AUTHORS doc/ipv6.txt doc/ChangeLog
%_libdir/lib*.so.*
%dir %_libdir/freerdp
%_datadir/freerdp/

%files plugins-standard
%_libdir/freerdp/*.so

%files devel
%_includedir/freerdp/
%_libdir/lib*.so
%_libdir/pkgconfig/*

%changelog
* Fri Jul 16 2010 Slava Dubrovskiy <dubrsl@altlinux.org> 0.7.2-alt1
- Build for ALT

* Tue Mar 16 2010 Mads Kiilerich <mads@kiilerich.com> - 0.0.1-1
- Initial "upstream" freerdp spec - made and tested for Fedora 12
