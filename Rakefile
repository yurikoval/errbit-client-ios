# -*- coding: utf-8 -*-
$:.unshift("/Library/RubyMotion/lib")
require 'motion/project/template/ios'
require 'formotion'
require 'bundler/setup'
Bundler.require

Motion::Project::App.setup do |app|
  # Use `rake config' to see complete project settings.
  app.name = 'errbit-client'
end

namespace :simulator do
  desc "Call 'Reset Content and Settings' in iOS Simulator menu"
  task :reset do
    %x{
      osascript <<-END
tell application "iPhone Simulator" to activate

tell application "System Events"
    tell process "iPhone Simulator"
        tell menu bar 1
            tell menu bar item "iOS Simulator"
              tell menu "iOS Simulator" to click menu item "Reset Content and Settings…"
            end tell
        end tell
        tell window 1 to click button "Reset"
    end tell
end tell

END
    }
  end
end