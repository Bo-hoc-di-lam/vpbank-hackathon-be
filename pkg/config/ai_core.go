package config

type AICore struct {
	BaseURL         string `envconfig:"AI_CORE_BASE_URL"`
	PromptEndpoint  string `envconfig:"AI_CORE_PROMPT_ENDPOINT"`
	EditEndpoint    string `envconfig:"AI_CORE_EDIT_ENDPOINT"`
	GenIconEndpoint string `envconfig:"AI_CORE_GEN_ICON_ENDPOINT"`
	GenCodeEndpoint string `envconfig:"AI_CORE_GEN_CODE_ENDPOINT"`
}
