module Document = { include Document; };
module Element = { include Element; };
module Location = { include Location; };
module Types = { include ReDomTypes; };
module Url = { include Url; };
module Window = { include Window; };

module Body = { include Body; };
module IFrame = { include IFrame; };
module Img = { include Img; };
module Input = { include Input; };
module Script = { include Script; };
module Span = { include Span; };

module Events = {
    module MessageEvent = { include MessageEvent };
    module DragStartEvent = { include DragStartEvent };
    module DragEvent = { include DragEvent };
    module DataTransfer = { include DataTransfer };
    module LoadEvent = { include LoadEvent };
};