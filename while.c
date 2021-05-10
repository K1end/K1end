
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Code PlayGround | SoloLearn</title>
<script type="f487077ae153a67c0d71837d-text/javascript">
    window.addEventListener("message", function (event) {
        if (event.origin !== "https://www.sololearn.com") return;
        var tokens = JSON.parse(event.data);
        Object.keys(tokens).forEach(function (token) {
            if (tokens[token]) {
                localStorage.setItem(token, tokens[token]);
            } else {
                localStorage.removeItem(token);
            }
        });
    });
    window.addEventListener("storage", function(event) {
        if (
            event.key === "accessToken" ||
            event.key === "refreshToken" ||
            event.key === "expiresIn" ||
            event.key === "user"
        ) {
            var data = JSON.stringify({[event.key]: localStorage.getItem(event.key)});
            document.getElementById('storageSyncIframe').contentWindow
                .postMessage(data, "https://www.sololearn.com");
        }
    });
    </script>

<script type="f487077ae153a67c0d71837d-text/javascript">
(function (w, d, s, l, i) {
		w[l] = w[l] || []; w[l].push({ 'gtm.start': new Date().getTime(), event: 'gtm.js' });
		var f = d.getElementsByTagName(s)[0], j = d.createElement(s), dl = l != 'dataLayer' ? '&l=' + l : '';
		j.async = true; j.src = 'https://www.googletagmanager.com/gtm.js?id=' + i + dl; f.parentNode.insertBefore(j, f);
	})(window, document, 'script', 'dataLayer', 'GTM-P7MQKF7');</script>


<script type="f487077ae153a67c0d71837d-text/javascript">
	!function (f, b, e, v, n, t, s) {
		if (f.fbq) return; n = f.fbq = function () {
			n.callMethod ?
			n.callMethod.apply(n, arguments) : n.queue.push(arguments)
		};
		if (!f._fbq) f._fbq = n; n.push = n; n.loaded = !0; n.version = '2.0';
		n.queue = []; t = b.createElement(e); t.async = !0;
		t.src = v; s = b.getElementsByTagName(e)[0];
		s.parentNode.insertBefore(t, s)
	}(window, document, 'script',
		'https://connect.facebook.net/en_US/fbevents.js');

	fbq('init', '805912723149733');
	fbq('track', 'PageView');
</script>
<noscript>
	<img height="1" width="1"
			src="https://www.facebook.com/tr?id=805912723149733&ev=PageView
		&noscript=1" />
</noscript>

<script type="f487077ae153a67c0d71837d-text/javascript">
                    window.slConfig = {"envURLs":{"blogApiHost":"https://www.sololearn.com","authApiHost":"https://www.sololearn.com","learnApiHost":"https://api2.sololearn.com/v2","playgroundApiHost":"https://api2.sololearn.com/v2/codeplayground","codeCoachApiHost":"https://api2.sololearn.com/v2/judge","trackingApiHost":"https://api2.sololearn.com/v2/tracking","paymentApiHost":"https://api2.sololearn.com/v2/payment","onboardingApiHost":"https://api2.sololearn.com/v2/dynamicflow","experimentApiHost":"https://api2.sololearn.com/v2/dynamicflow","commentsApiHost":"https://www.sololearn.com","userInfoApiHost":"https://api2.sololearn.com/v2/userinfo","achievementApiHost":"https://api2.sololearn.com/v2/achievement/api","cdnApiHost":"https://assets.sololearn.com","playgroundUrl":"https://code.sololearn.com","soloLearnUrl":"https://www.sololearn.com","lookupApiHost":"https://api2.sololearn.com/v2/lookup","mailingApiHost":"https://www.sololearn.com","staticPagesApiHost":"https://www.sololearn.com","gamificationApiHost":"https://api2.sololearn.com/v2/gamification"}}
                    window.globalConfig = {"githubClientId":"81258a84055f997ac823","stackoverflowClientId":"14353"}
                </script>
<script src="https://www.sololearn.com/Scripts/authorize-v5.js" type="f487077ae153a67c0d71837d-text/javascript"></script>
<script src="https://www.sololearn.com/Scripts/sltrg.js" type="f487077ae153a67c0d71837d-text/javascript"></script>
<script src="https://www.sololearn.com/Scripts/fngprnt.js" type="f487077ae153a67c0d71837d-text/javascript"></script>
<script src="https://www.sololearn.com/Scripts/definer.js" type="f487077ae153a67c0d71837d-text/javascript"></script>
<link rel="shortcut icon" href="https://www.sololearn.com/Images/favicon.ico"></link>
<meta name="title" content="Code PlayGround | SoloLearn"><meta name="description" content="Our Code Playground integrates modern IDE functionally for writing better code, optimized for building and debugging your projects."><meta property="og:type" content="website"><meta property="og:url" content="https://code.sololearn.com"><meta property="og:title" content="Code PlayGround | SoloLearn"><meta property="og:description" content="Our Code Playground integrates modern IDE functionally for writing better code, optimized for building and debugging your projects."><meta property="og:image" content="https://www.sololearn.com/Icons/Courses/0.png"><meta name="twitter:card" content="summary_large_image"><meta name="twitter:url" content="https://code.sololearn.com"><meta name="twitter:title" content="Code PlayGround | SoloLearn"><meta name="twitter:description" content="Our Code Playground integrates modern IDE functionally for writing better code, optimized for building and debugging your projects."><meta name="twitter:image" content="https://www.sololearn.com/Icons/Courses/0.png">
<style>html,body,div,span,applet,object,iframe,h1,h2,h3,h4,h5,h6,p,blockquote,pre,a,abbr,acronym,address,big,cite,code,del,dfn,em,img,ins,kbd,q,s,samp,small,strike,strong,sub,sup,tt,var,b,u,i,center,dl,dt,dd,ol,ul,li,fieldset,form,label,legend,table,caption,tbody,tfoot,thead,tr,th,td,article,aside,canvas,details,embed,figure,figcaption,footer,header,hgroup,menu,nav,output,ruby,section,summary,time,mark,audio,video{margin:0;padding:0;border:0;font:inherit;font-size:100%;vertical-align:baseline;box-sizing:border-box}*{-webkit-tap-highlight-color:rgba(255,255,255,0);text-decoration:none}:focus{outline:0}article,aside,details,figcaption,figure,footer,header,hgroup,menu,nav,section{display:block}body{line-height:1}ol,ul{list-style:none}blockquote,q{quotes:none}blockquote:before,blockquote:after,q:before,q:after{content:'';content:none}table{border-collapse:collapse;border-spacing:0}input[type=search]::-webkit-search-cancel-button,input[type=search]::-webkit-search-decoration,input[type=search]::-webkit-search-results-button,input[type=search]::-webkit-search-results-decoration{-webkit-appearance:none;-moz-appearance:none}input[type=search]{-webkit-appearance:none;-moz-appearance:none;-webkit-box-sizing:content-box;-moz-box-sizing:content-box;box-sizing:content-box}textarea{overflow:auto;vertical-align:top;resize:vertical}audio,canvas,video{display:inline-block;*display:inline;*zoom:1;max-width:100%}audio:not([controls]){display:none;height:0}[hidden]{display:none}html{font-size:100%;-webkit-text-size-adjust:100%;-ms-text-size-adjust:100%}a:focus{outline:none}a{outline:none;text-decoration:none}a:focus,a:visited{outline:none}a:focus:focus,a:visited:focus{outline:none}a:active,a:hover{outline:0}img{border:0;-ms-interpolation-mode:bicubic}figure{margin:0}form{margin:0}fieldset{border:1px solid #c0c0c0;margin:0 2px;padding:0.35em 0.625em 0.75em}legend{border:0;padding:0;white-space:normal;*margin-left:-7px}button,input,select,textarea{font-size:100%;margin:0;vertical-align:baseline;*vertical-align:middle}button,input{line-height:normal}button,select{text-transform:none}button,html input[type="button"],input[type="reset"],input[type="submit"]{-webkit-appearance:button;cursor:pointer;*overflow:visible}button[disabled],html input[disabled]{cursor:default}input[type="checkbox"],input[type="radio"]{box-sizing:border-box;padding:0;*height:13px;*width:13px}input[type=search]{-webkit-appearance:textfield;-moz-box-sizing:content-box;-webkit-box-sizing:content-box;box-sizing:content-box}input[type="search"]::-webkit-search-cancel-button,input[type="search"]::-webkit-search-decoration{-webkit-appearance:none}button::-moz-focus-inner,input::-moz-focus-inner{border:0;padding:0}textarea{overflow:auto;vertical-align:top}table{border-collapse:collapse;border-spacing:0}html,button,input,select,textarea{color:#222}img{vertical-align:middle}fieldset{border:0;margin:0;padding:0}textarea{resize:vertical}.chromeframe{margin:0.2em 0;background:#ccc;color:#000;padding:0.2em 0}@font-face{font-family:"GothamRounded-Light";src:url("https://assets.sololearn.com/fonts/GothamRoundedLight/gothamrnd-light.eot");src:url("https://assets.sololearn.com/fonts/GothamRoundedLight/gothamrnd-light.eot") format("embedded-opentype"),url("https://assets.sololearn.com/fonts/GothamRoundedLight/gothamrnd-light.woff") format("woff"),url("https://assets.sololearn.com/fonts/GothamRoundedLight/gothamrnd-light.ttf") format("truetype"),url("https://assets.sololearn.com/fonts/GothamRoundedLight/gothamrnd-light.svg#GothamRoundedLight") format("svg");font-weight:300}@font-face{font-family:"GothamRounded-Normal";src:url("https://assets.sololearn.com/fonts/GothamRoundedBook/gothamrnd-book.eot");src:url("https://assets.sololearn.com/fonts/GothamRoundedBook/gothamrnd-book.eot") format("embedded-opentype"),url("https://assets.sololearn.com/fonts/GothamRoundedBook/gothamrnd-book.woff") format("woff"),url("https://assets.sololearn.com/fonts/GothamRoundedBook/gothamrnd-book.ttf") format("truetype"),url("https://assets.sololearn.com/fonts/GothamRoundedBook/gothamrnd-book.svg#GothamRoundedBook") format("svg");font-weight:normal}@font-face{font-family:"GothamRounded-Medium";src:url("https://assets.sololearn.com/fonts/GothamRoundedMedium/gothamrnd-medium.eot");src:url("https://assets.sololearn.com/fonts/GothamRoundedMedium/gothamrnd-medium.eot") format("embedded-opentype"),url("https://assets.sololearn.com/fonts/GothamRoundedMedium/gothamrnd-medium.woff") format("woff"),url("https://assets.sololearn.com/fonts/GothamRoundedMedium/gothamrnd-medium.ttf") format("truetype"),url("https://assets.sololearn.com/fonts/GothamRoundedMedium/gothamrnd-medium.svg#GothamRoundedMedium") format("svg");font-weight:500}@font-face{font-family:"GothamRounded-Bold";src:url("https://assets.sololearn.com/fonts/GothamRoundedBold/gothamrnd-bold.eot");src:url("https://assets.sololearn.com/fonts/GothamRoundedBold/gothamrnd-bold.eot") format("embedded-opentype"),url("https://assets.sololearn.com/fonts/GothamRoundedBold/gothamrnd-bold.woff") format("woff"),url("https://assets.sololearn.com/fonts/GothamRoundedBold/gothamrnd-bold.ttf") format("truetype"),url("https://assets.sololearn.com/fonts/GothamRoundedBold/gothamrnd-bold.svg#GothamRoundedBold") format("svg");font-weight:bold}@font-face{font-family:"Fira Sans";font-style:normal;font-weight:400;src:url("https://assets.sololearn.com/fonts/FiraSansRegular/fira-sans-v10-latin-regular.eot");src:url("https://assets.sololearn.com/fonts/FiraSansRegular/fira-sans-v10-latin-regular.eot?#iefix") format("embedded-opentype"),url("https://assets.sololearn.com/fonts/FiraSansRegular/fira-sans-v10-latin-regular.woff2") format("woff2"),url("https://assets.sololearn.com/fonts/FiraSansRegular/fira-sans-v10-latin-regular.woff") format("woff"),url("https://assets.sololearn.com/fonts/FiraSansRegular/fira-sans-v10-latin-regular.ttf") format("truetype"),url("https://assets.sololearn.com/fonts/FiraSansRegular/fira-sans-v10-latin-regular.svg#FiraSans") format("svg")}@font-face{font-family:"Fira Sans";font-style:normal;font-weight:500;src:url("https://assets.sololearn.com/fonts/FiraSansMedium/fira-sans-v10-latin-500.eot");src:url("https://assets.sololearn.com/fonts/FiraSansMedium/fira-sans-v10-latin-500.eot?#iefix") format("embedded-opentype"),url("https://assets.sololearn.com/fonts/FiraSansMedium/fira-sans-v10-latin-500.woff2") format("woff2"),url("https://assets.sololearn.com/fonts/FiraSansMedium/fira-sans-v10-latin-500.woff") format("woff"),url("https://assets.sololearn.com/fonts/FiraSansMedium/fira-sans-v10-latin-500.ttf") format("truetype"),url("https://assets.sololearn.com/fonts/FiraSansMedium/fira-sans-v10-latin-500.svg#FiraSans") format("svg")}@font-face{font-family:"Fira Sans";font-style:normal;font-weight:600;src:url("https://assets.sololearn.com/fonts/FiraSansSemiBold/fira-sans-v10-latin-600.eot");src:url("https://assets.sololearn.com/fonts/FiraSansSemiBold/fira-sans-v10-latin-600.eot?#iefix") format("embedded-opentype"),url("https://assets.sololearn.com/fonts/FiraSansSemiBold/fira-sans-v10-latin-600.woff2") format("woff2"),url("https://assets.sololearn.com/fonts/FiraSansSemiBold/fira-sans-v10-latin-600.woff") format("woff"),url("https://assets.sololearn.com/fonts/FiraSansSemiBold/fira-sans-v10-latin-600.ttf") format("truetype"),url("https://assets.sololearn.com/fonts/FiraSansSemiBold/fira-sans-v10-latin-600.svg#FiraSans") format("svg")}@font-face{font-family:"Fira Sans";font-style:normal;font-weight:700;src:url("https://assets.sololearn.com/fonts/FiraSansBold/fira-sans-v10-latin-700.eot");src:url("https://assets.sololearn.com/fonts/FiraSansBold/fira-sans-v10-latin-700.eot?#iefix") format("embedded-opentype"),url("https://assets.sololearn.com/fonts/FiraSansBold/fira-sans-v10-latin-700.woff2") format("woff2"),url("https://assets.sololearn.com/fonts/FiraSansBold/fira-sans-v10-latin-700.woff") format("woff"),url("https://assets.sololearn.com/fonts/FiraSansBold/fira-sans-v10-latin-700.ttf") format("truetype"),url("https://assets.sololearn.com/fonts/FiraSansBold/fira-sans-v10-latin-700.svg#FiraSans") format("svg")}@font-face{font-family:"Fira Mono";font-style:normal;font-weight:400;src:url("https://assets.sololearn.com/fonts/FiraMonoRegular/FiraMono-Regular.eot");src:url("https://assets.sololearn.com/fonts/FiraMonoRegular/FiraMono-Regular.woff2") format("woff2"),url("https://assets.sololearn.com/fonts/FiraMonoRegular/FiraMono-Regular.woff") format("woff"),url("https://assets.sololearn.com/fonts/FiraMonoRegular/FiraMono-Regular.ttf") format("truetype"),url("https://assets.sololearn.com/fonts/FiraMonoRegular/FiraMono-Regular.otf") format("opentype")}@font-face{font-family:"Fira Mono";font-style:normal;font-weight:500;src:url("https://assets.sololearn.com/fonts/FiraMonoMedium/FiraMono-Medium.eot");src:url("https://assets.sololearn.com/fonts/FiraMonoMedium/FiraMono-Medium.woff2") format("woff2"),url("https://assets.sololearn.com/fonts/FiraMonoMedium/FiraMono-Medium.woff") format("woff"),url("https://assets.sololearn.com/fonts/FiraMonoMedium/FiraMono-Medium.ttf") format("truetype"),url("https://assets.sololearn.com/fonts/FiraMonoMedium/FiraMono-Medium.otf") format("opentype")}@font-face{font-family:"Fira Mono";font-style:normal;font-weight:700;src:url("https://assets.sololearn.com/fonts/FiraMonoBold/FiraMono-Bold.eot");src:url("https://assets.sololearn.com/fonts/FiraMonoBold/FiraMono-Bold.woff2") format("woff2"),url("https://assets.sololearn.com/fonts/FiraMonoBold/FiraMono-Bold.woff") format("woff"),url("https://assets.sololearn.com/fonts/FiraMonoBold/FiraMono-Bold.ttf") format("truetype"),url("https://assets.sololearn.com/fonts/FiraMonoBold/FiraMono-Bold.otf") format("opentype")}@font-face{font-family:"Gloria Hallelujah";font-style:normal;font-weight:400;src:url("https://assets.sololearn.com/fonts/GloriaHallelujah/GloriaHallelujah-Regular.ttf") format("truetype")}
</style>
<link data-chunk="main" rel="preload" as="script" href="https://www.sololearn.com/nodessr/web/main-bundle-e8cbcb7c.js">
</head>
<body>
<iframe height="0" width="0" style="display: none; visibility: hidden" src="https://www.sololearn.com/storagesynciframe" id="storageSyncIframe"></iframe>

<noscript>
<iframe height="0" width="0" style="display: none; visibility: hidden"></iframe>
</noscript>

<div id="main"><div style="outline:none" tabindex="-1"></div></div>
<script id="__LOADABLE_REQUIRED_CHUNKS__" type="application/json">[]</script><script id="__LOADABLE_REQUIRED_CHUNKS___ext" type="application/json">{"namedChunks":[]}</script>
<script async data-chunk="main" src="https://www.sololearn.com/nodessr/web/main-bundle-e8cbcb7c.js" type="f487077ae153a67c0d71837d-text/javascript"></script>
<script src="https://ajax.cloudflare.com/cdn-cgi/scripts/7d0fa10a/cloudflare-static/rocket-loader.min.js" data-cf-settings="f487077ae153a67c0d71837d-|49" defer=""></script></body>
</html>
