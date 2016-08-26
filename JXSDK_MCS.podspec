Pod::Spec.new do |s|
  s.name         = "JXSDK_MCS"
  s.version      = "1.0.0"
  s.summary      = "The SDK for mcsuser"
  s.homepage     = "https://github.com/jiaxincloud/JXSDK_MCS"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author             = { "jiaxin" => "github@jiaxincloud.com" }
  s.platform     = :ios, "7.0"
  s.source       = { :git => "https://github.com/jiaxincloud/JXSDK_MCS.git", :tag => s.version.to_s }
  s.source_files  = "JXSDK_MCS/**/*.h"
  s.requires_arc = true
  s.frameworks  = "SystemConfiguration"
  s.libraries = 'c++', 'xml2', 'sqlite3', 'resolv'
  s.vendored_libraries = ['JXSDK_MCS/*.a']
  s.xcconfig = {'OTHER_LDFLAGS' => '-ObjC' }
end
