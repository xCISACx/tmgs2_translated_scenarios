section "z10_pl_000"{
    Background_Bg_GS2("BG_FP700_?_0", 1, #1, 0);
    Music_PlayBGM(0, "MN_BGB_062_000", 127, 40);
    Screen_WipeIn(2);
    Voice_PlayVoice("Z0700000_W00000", #1, "");
    Message_Who(0);
    Message_MsgDisp("Clerk", "Welcome! What can I do for you?");
    Message_CloseMsg();
    Run_WndShop(9, 0);
    int var0 = Run_WndShop_Result();
    switch (var0){
        case 0:
        Voice_PlayVoice("Z0700000_W00500", #1, "");
        Message_Who(0);
        Message_MsgDisp("Clerk", "Come again～!");
        Message_Who(0);
        Message_MsgDisp("主人公", "... Wow.\nI'll have to come another time.");
        break ;
        case 1:
        Voice_PlayVoice("Z0700000_W00400", #1, "");
        Message_Who(0);
        Message_MsgDisp("Clerk", "Thank you! Come again～!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes! Shopping is so great!");
        break ;
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
