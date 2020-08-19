Pod::Spec.new do |s|
  s.name         = "VANLibs"
  s.version      = "0.4.0_noNet"
  s.summary      = "A Framework of iOS development. It will help developer more efficient"
  s.homepage     = "https://github.com/Vandrim/vanlibs"
  s.license      = "MIT"
  s.author       = { "vandrim" => "vandrim@163.com" }
  s.platform     = :ios, "9.0"
  s.source       = { :git => "https://github.com/Vandrim/vanlibs.git", :tag => "#{s.version}" }
  s.frameworks   = "Foundation", "UIKit"
  s.resource   	 = "Resources.bundle"
  s.vendored_frameworks = "VANLibs.framework"
  s.requires_arc = true
  s.dependency 'Masonry', '~> 1.1.0'
  s.dependency 'AFNetworking', '~> 4.0.0'
  s.dependency 'MJExtension', '~> 3.0.17'
  s.dependency 'ReactiveObjC', '~> 3.1.1'
  s.dependency 'SDWebImage', '~> 5.7.0'
  s.dependency 'Reachability', '~> 3.2'
  s.dependency 'MBProgressHUD', '~> 1.2.0'
  s.dependency 'PinYin4Objc', '~> 1.1.1'
  s.dependency 'SDCycleScrollView', '~> 1.80'
  s.dependency 'FLAnimatedImage', '~> 1.0.12'
  s.dependency 'MJRefresh', '~> 3.3.1'
  s.dependency 'IQKeyboardManager'
end
