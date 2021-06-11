#
#  Be sure to run `pod spec lint PTGAdFramework.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|

  # ―――  Spec Metadata  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  These will help people to find your library, and whilst it
  #  can feel like a chore to fill in it's definitely to your advantage. The
  #  summary should be tweet-length, and the description more in depth.
  #

  spec.name         = "PTGJAdSDK"
  spec.version      = "1.2.0"
  spec.summary      = "A short description of PTGJAdSDK."


  spec.description  = <<-DESC
    PTGAdFramework provides Union ADs which include native、banner、feed、splash、RewardVideo etc.
  DESC

  spec.homepage     = "https://github.com/PTGAd/PTGJAdSDK"

  spec.license      = "MIT"


  spec.author             = { "xiangrongsu" => "15139093304@163.com" }

  spec.source       = { :git => "https://github.com/PTGAd/PTGJAdSDK.git", :tag => "#{spec.version }" }


  spec.platform     = :ios, "9.0"
  spec.frameworks = 'UIKit', 'SafariServices', 'CoreLocation', 'MapKit', 'AdSupport', 'CoreTelephony', 'SystemConfiguration', 'WebKit', 'ImageIO', 'Accelerate', 'Photos', 'AssetsLibrary', 'CoreServices'
  spec.libraries = 'c++', 'resolv', 'z', 'sqlite3'
  spec.vendored_frameworks =  'Frameworks/JADYun.framework'
    
https://help-sdk-doc.jd.com/ansdkDoc/access_docs/iOS/%E5%B9%BF%E5%91%8A%E6%8E%A5%E5%85%A5/%E4%BF%A1%E6%81%AF%E6%B5%81%E5%B9%BF%E5%91%8A.html
  valid_archs = ['armv7', 'armv7s', 'x86_64', 'arm64']
  spec.xcconfig = {
    'VALID_ARCHS' =>  valid_archs.join(' '),
  }

end
