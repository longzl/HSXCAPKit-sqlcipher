Pod::Spec.new do |s|
  s.name         = "HSXCAPKit-sqlcipher"
  s.version      = "0.1.1"
  s.summary      = "CAPKit-sqlcipher library."
  s.description  = <<-DESC
                   CAPKit-sqlcipher library desc.
                   DESC
  s.homepage     = "https://github.com/longzl/HSXCAPKit-sqlcipher"
  s.license      = "MIT"
  s.author       = { "longzl" => "longzhili2005@126.com" }
  s.platform     = :ios, "11.0.0"
  s.source       = { :git => "https://github.com/longzl/HSXCAPKit-sqlcipher.git", :tag => "v#{s.version}" }
  s.header_mappings_dir = "sqlcipher/src"
  s.public_header_files = 'sqlcipher/src/sqlcipher.h', 'sqlcipher/src/crypto.h', 'sqlcipher/src/sqlite3ext.h'
  s.libraries     = "c++","ssl","crypto"
  s.source_files  = "sqlcipher/src/*.{h,c}"
  s.compiler_flags  = '-DSQLITE_HAS_CODEC'
  s.requires_arc = false

  s.dependency 'HSXCAPKit-3rdparty-libs', '~> 0.1.0'

  s.pod_target_xcconfig = { "HEADER_SEARCH_PATHS" => "$(PODS_ROOT)/HSXCAPKit-3rdparty-libs" }
  
end
