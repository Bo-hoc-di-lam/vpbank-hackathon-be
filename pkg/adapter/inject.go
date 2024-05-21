package adapter

import (
	"be/pkg/adapter/ai_core"
	"github.com/samber/do"
)

func Inject(di *do.Injector) {
	do.Provide(di, ai_core.NewAdapter)
}
