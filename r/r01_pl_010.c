section "r01_pl_010"{
    System_GlobalWork(3, 0, 0);
    if (Parameter_GetPl1Param(13) == 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "This year's big event happens once\nevery three years.\nThe party will be a two day trip at\na ski lodge.");
        Message_Who(0);
        Message_MsgDisp("主人公", "But... I seem to be sick...\nI will have to take the day off from\nschool in the morning...");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "This year's big event happens once\nevery three years.\nThe party will be a two day trip at\na ski lodge.\nHow amazing!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Even though we have morning classes,\nwe don't have to attend.");
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Background_Bg_GS2("BG_SC303_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "Finally, the end of class! ... Huh?");
    Message_Who(0);
    Message_MsgDisp("主人公", "(There's a note on the desk..\nI wonder what it says.)");
    Message_Who(0);
    Message_MsgDisp("Note", "\"I'll pass on the lodge.\nIt'll be a busy time for Christmas.\nI won't be taking a break from the\nshop for the two days.");
    Message_Who(0);
    Message_MsgDisp("Note", "You should go and enjoy yourself.\nLater!\nT.S\"");
    Message_Who(0);
    Message_MsgDisp("主人公", "(T.S... ｛Saeki＊＊｝.)");
    Message_Who(0);
    Message_MsgDisp("主人公", "(I see, ｛Saeki＊＊｝\ndoesn't want to participate...\nIt can't be helped, he has to work\nat the shop.)");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Background_Bg_GS2("BG_SC000_WI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "Oh, that's right.\nThere's gift exchanging at the\nparty.");
    Message_Who(0);
    Message_MsgDisp("主人公", "I haven't bought a present, yet!");
    }
