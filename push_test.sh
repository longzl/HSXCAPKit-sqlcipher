VERSION="v0.1.1"
NAME="HSXCAPKit-sqlcipher"
export https_proxy=http://127.0.0.1:7890 http_proxy=http://127.0.0.1:7890 all_proxy=socks5://127.0.0.1:7890
git add .
git commit -am "fix ${VERSION}"
git push
git tag -d ${VERSION}
git tag ${VERSION}
git push --tags

# export PATH=/Users/longzl/code/git/Build-OpenSSL-cURL/archive/libcurl-7.84.0-openssl-1.1.1p-nghttp2-NONE/bin:$PATH
# export LDFLAGS="-L/Users/longzl/code/git/Build-OpenSSL-cURL/archive/libcurl-7.84.0-openssl-1.1.1p-nghttp2-NONE/lib/iOS"
# export CPPFLAGS="-I/Users/longzl/code/git/Build-OpenSSL-cURL/archive/libcurl-7.84.0-openssl-1.1.1p-nghttp2-NONE/include"

# export PATH=/usr/local/Cellar/openssl@1.1/1.1.1t/bin:$PATH
# export LDFLAGS="-L/usr/local/Cellar/openssl@1.1/1.1.1t/lib"
# export CPPFLAGS="-I/usr/local/Cellar/openssl@1.1/1.1.1t/include"

pod cache clean ${NAME}
pod repo push hsxorg *.podspec --use-libraries --allow-warnings --skip-import-validation --sources='https://github.com/longzl/PodSpec.git,https://github.com/CocoaPods/Specs.git'