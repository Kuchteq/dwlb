# Maintainer: Mariusz Kuchta <mariusz@kuchta.dev>
pkgname=dwlb-wayrice
pkgver=1.0.1.r0.28d7e79
pkgrel=3
pkgdesc="A fast, feature-complete bar for dwl."
arch=('x86_64')
url="https://github.com/Kuchteq/dwlb"
license=('GPL')
depends=('fcft' 'tllist' 'pixman')
makedepends=('git' 'make')
provides=("${pkgname%-git}")
conflicts=("${pkgname%-git}")

#prepare() {
#	cd "$srcdir/${pkgname%-git}"
#	# Use a custom blocks.h if the file is not empty
#	if [ -s "$srcdir/blocks.h" ]; then
#		cp -f "$srcdir/blocks.h" blocks.h
#	fi
#}

build() {
	cd ../
	make
}

package() {
	cd ../
	DESTDIR="$pkgdir" PREFIX=/usr make install
}

