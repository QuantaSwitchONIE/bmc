define(function(){
	var CC = {
		UNAUTHORIZED: 7,
		KVM_TOKEN_GEN_FAILED: 1000,

		HTTP: {
			UNAUTHORIZED: 401,
			NO_PRIVILEGE_ACCESS: 403,
			NOT_FOUND: 404,
			FEATURE_NOT_ENABLED: 405,
			SERVER_ERROR: 500,
			STATUS_OK: 200
		},

		NOTIFY_MAP: {
			"danger": "error",
			"warning": "warn",
			"info": "info",
			"success": "success"
		}
	};

	return CC;
});