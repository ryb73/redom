module Window = {
    include Window;
};

module Document = {
    include Document;
};

module Location = {
    include Location;
};

module Element = {
    include Element;

    module IFrame = { include IFrame; };
    module Span = { include Span; };
    module Img = { include Img; };
};

module Events = {
    module MessageEvent = { include MessageEvent };
    module DragStartEvent = { include DragStartEvent };
    module DragEvent = { include DragEvent };
    module DataTransfer = { include DataTransfer };
};