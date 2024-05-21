package config

import "github.com/samber/do"

func Inject(di *do.Injector) {
	do.ProvideValue(di, MustLoad[Server]())
	do.ProvideValue(di, MustLoad[AICore]())
}
