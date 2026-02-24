section "z02_pl_000"{
    Background_Bg_GS2("BG_WFS00_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_WF_S00_000", 127, 40);
    Voice_PlayVoice("Z0800000_W00000", #1, "");
    Message_Who(0);
    Message_MsgDisp("Clerk", "Welcome. Can I help you?...");
    Message_CloseMsg();
    Run_WndShop(1, 0);
    int var0 = Run_WndShop_Result();
    switch (var0){
        case 0:
        Voice_PlayVoice("Z0800000_W00500", #1, "");
        Message_Who(0);
        Message_MsgDisp("Clerk", "Thank you.");
        Message_Who(0);
        Message_MsgDisp("主人公", "... Wow.\nI'll have to come back some other\ntime.");
        break ;
        case 1:
        Voice_PlayVoice("Z0800000_W00400", #1, "");
        Message_Who(0);
        Message_MsgDisp("Clerk", "Thank you!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes! Shopping is so great!");
        break ;
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
