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
    module Img = { include Img; };
    module Input = { include Input; };
    module Span = { include Span; };
};

module Events = {
    module MessageEvent = { include MessageEvent };
    module DragStartEvent = { include DragStartEvent };
    module DragEvent = { include DragEvent };
    module DataTransfer = { include DataTransfer };
};