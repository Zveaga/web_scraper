#ifndef CURL_REQUEST_HPP
# define CURL_REQUEST_HPP

#include <jsoncpp/json/json.h>
#include <curl/curl.h>
#include<iostream>
#include<vector>
#include<string>

class CurlRequest
{
	private:
		std::vector<std::string> _api_urls;
		std::vector<std::string> curl_json_responses;
		std::string _api_key;
		std::string _webhook_url;

	public:
		// --Conststructors-- //
		CurlRequest();
		// --Destructor-- //
		~CurlRequest();

		// --Overloads-- //

		// --Member Functions-- //
		std::vector<std::string>	initApiUrl();
		void 						initWebhooks();
		void 						setApiKey(std::string api_key);
		void 						setWebhookURL(std::string webhook_url);
		std::string 				getApiKey() const;
		std::string 				getWebhookURL() const;


};









#endif