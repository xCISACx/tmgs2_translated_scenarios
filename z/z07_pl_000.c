section "z07_pl_000"{
    Background_Bg_GS2("BG_NES20_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_NE_S20_000", 127, 40);
    Voice_PlayVoice("Z0600000_W00000", #1, "");
    Message_Who(0);
    Message_MsgDisp("Clerk", "Welcome. May I help you?");
    Message_CloseMsg();
    Run_WndShop(6, 0);
    int var0 = Run_WndShop_Result();
    switch (var0){
        case 0:
        Voice_PlayVoice("Z0600000_W00500", #1, "");
        Message_Who(0);
        Message_MsgDisp("Clerk", "Thank you.\nBy all means, please come again.");
        Message_Who(0);
        Message_MsgDisp("主人公", "... Wow.\nI'll have to come again next time.");
        break ;
        case 1:
        Voice_PlayVoice("Z0600000_W00400", #1, "");
        Message_Who(0);
        Message_MsgDisp("Clerk", "Thank you. Please take care of it.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes! Shopping is so great!");
        break ;
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
