Name: freerdp
Version: 1.0
Release: alt1.beta3
License: Apache License 2.0
Group: Networking/Remote access
Summary: Remote Desktop Protocol functionality
Packager: Slava Dubrovskiy <dubrsl@altlinux.ru>
Url: http://freerdp.sourceforge.net/
Source: http://downloads.sourceforge.net/%name/%name-%version.tar
Patch: %name-%version-%release.patch

BuildRequires: cmake ctest xmlto openssl-devel libX11-devel libXcursor-devel libXdamage-devel libXext-devel libXv-devel libXinerama-devel libxkbfile-devel cups-devel zlib-devel libalsa-devel libdirectfb-devel libICE-devel libao-devel libsamplerate-devel libpcsclite-devel libpulseaudio-devel libavcodec-devel

Requires: xfreerdp = %version-%release %name-plugins-standard = %version-%release

%description
freerdp implements Remote Desktop Protocol (RDP), used in a number of Microsoft
products. Rdesktop analog.

This is metapackage.


%package -n xfreerdp
Summary: Remote Desktop Protocol client
Group: Networking/Remote access

%description -n xfreerdp
xfreerdp is a client for Remote Desktop Protocol (RDP), used in a number of
Microsoft products.

This package contains X11 UI.

%package -n dfreerdp
Summary: Remote Desktop Protocol client
Group: Networking/Remote access
Provides: dfbfreerdp

%description -n dfreerdp
dfbfreerdp is a client for Remote Desktop Protocol (RDP), used in a number of
Microsoft products.

This package contains  DirectFB UI.

%package -n lib%name
Summary: Core libraries implementing the RDP protocol
Group: Networking/Remote access

%description -n lib%name
libfreerdp can be embedded in applications.


%package -n lib%name-devel
Summary: Libraries and header files for embedding and extending freerdp
Group: Development/Other
Requires: lib%name = %version-%release pkgconfig
Provides: freerdp-devel
Obsoletes: freerdp-devel

%description -n lib%name-devel
Header files and unversioned libraries for libfreerdp.

%package plugins-standard
Summary: Plugins for handling the standard RDP channels
Group: Networking/Remote access
Requires: lib%name = %version-%release

%description plugins-standard
A set of plugins to the channel manager implementing the standard virtual
channels extending RDP core functionality.  For example, sounds, clipboard
sync, disk/printer redirection, etc.

%prep
%setup -q
%patch -p1

%build
%cmake	-DWITH_ALSA=ON \
	-DWITH_PULSEAUDIO=ON \
	-DWITH_PCSC=ON \
	-DWITH_CUNIT=ON \
	-DWITH_CUPS=ON \
	-DWITH_FFMPEG=ON \
	-DWITH_X11=ON \
	-DWITH_XKBFILE=ON \
	-DWITH_XINERAMA=ON \
	-DWITH_XEXT=ON \
	-DWITH_XCURSOR=ON \
	-DWITH_XV=ON \
	-DWITH_DIRECTFB=ON \
	-DWITH_XDAMAGE=ON

%make_build -C BUILD

%install
%makeinstall_std -C BUILD

%files

%files -n xfreerdp
%_bindir/xfreerdp
%_mandir/*/*

%files -n dfreerdp
%_bindir/dfreerdp

%files -n lib%name
%doc LICENSE README
%_libdir/lib*.so.*
%dir %_libdir/freerdp
%_datadir/freerdp/

%files plugins-standard
%_libdir/freerdp/*.so

%files -n lib%name-devel
%_includedir/freerdp
%_libdir/lib*.so
%_libdir/pkgconfig/*

%changelog
* Sat Dec 10 2011 Slava Dubrovskiy <dubrsl@altlinux.org> 1.0-alt1.beta3
- new version

* Sat Nov 12 2011 Slava Dubrovskiy <dubrsl@altlinux.org> 1.0-alt1.beta1
- New version (ALT #24784)
- Update spec for use cmake
- Change license
- Rename subpackage dfbfreerdp -> dfreerdp

* Mon Nov 15 2010 Slava Dubrovskiy <dubrsl@altlinux.org> 0.8.2-alt1
- new version

* Thu Oct 28 2010 Mykola Grechukh <gns@altlinux.ru> 0.8.1-alt2
- added patch

* Thu Oct 28 2010 Mykola Grechukh <gns@altlinux.ru> 0.8.1-alt1
- new version

* Fri Aug 06 2010 Slava Dubrovskiy <dubrsl@altlinux.org> 0.7.3-alt2
- Rename subpackage freerdp-devel -> libfreerdp-devel

* Thu Aug 05 2010 Slava Dubrovskiy <dubrsl@altlinux.org> 0.7.3-alt1
- New version

* Fri Jul 16 2010 Slava Dubrovskiy <dubrsl@altlinux.org> 0.7.2-alt2
- Fix undefined symbols

* Fri Jul 16 2010 Slava Dubrovskiy <dubrsl@altlinux.org> 0.7.2-alt1
- Build for ALT

* Tue Mar 16 2010 Mads Kiilerich <mads@kiilerich.com> - 0.0.1-1
- Initial "upstream" freerdp spec - made and tested for Fedora 12
