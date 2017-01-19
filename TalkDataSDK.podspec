Pod::Spec.new do |s|
s.name     = 'TalkDataSDK'
s.version  = '1.0.0'
s.license= { :type => "MIT", :file => "LICENSE" }
s.summary  = 'A delightful iOS Analytics framework.'
s.homepage = 'https://github.com/HzHenghaokeji/TalkDataSDK'
s.authors  = { 'Kevin Wang' => 'wangw@henghaojijin.com' }
s.source   = { :git => 'https://github.com/HzHenghaokeji/TalkDataSDK.git',  :tag => s.version, :submodules => true }
s.social_media_url   = 'http://www.henghaojijin.com'
s.requires_arc = true
s.ios.deployment_target = '8.0'
s.source_files = '**/*.h'
end
                                                                               
