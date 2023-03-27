VERSION="v0.1.1"
NAME="HSXCAPKit-sqlcipher"
git add .
git commit -am "fix ${VERSION}"
git push
git tag -d ${VERSION}
git tag ${VERSION}
git push --tags

pod cache clean ${NAME}
pod repo push hsxorg *.podspec --use-libraries --allow-warnings --skip-import-validation --sources='https://github.com/longzl/PodSpec.git,https://github.com/CocoaPods/Specs.git'