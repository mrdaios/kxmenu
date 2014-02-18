Pod::Spec.new do |s|
  s.name         = 'KxMenu'
  s.version      = '1.0'
  s.homepage     = 'http://mrdaios.github.io'
  s.authors      =  '"mrdaios" => "mrdaios@gmail.com"'
  s.summary      = 'fork from kxMenu'
  s.description  = <<-DESC
                 A longer description of DHToolkits in Markdown format.

                 * Think: Why did you write this? What is the focus? What does it do?
                 * CocoaPods will be using this to generate tags, and improve search results.
                 * Try to keep it short, snappy and to the point.
                 * Finally, don't worry about the indent, CocoaPods strips it!
                 DESC

# Source Info
  s.platform     =  :ios, '6.0'
  s.source       =  {:git => 'https://github.com/mrdaios/kxmenu.git', :tag => '1.0'}
  s.source_files = 'Source', 'Source/**/*.{h,m}'
  s.frameworks   =  'UIKit', 'Foundation', 'CoreGraphics'

  s.requires_arc = true
  
# Pod Dependencies