package config

type AICore struct {
	BaseURL        string `envconfig:"AI_CORE_BASE_URL"`
	PromptEndpoint string `envconfig:"AI_CORE_PROMPT_ENDPOINT"`
}
