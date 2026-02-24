section "q22_pl_000"{
    Background_Bg_GS2("BG_SCB10_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("Q2500000_W00000", #1, "");
    Message_Who(0);
    Message_MsgDisp("Vice Principal", "Excuse me! What is going on here!?");
    Message_Who(0);
    Message_MsgDisp("主人公", "Wah, it's the vice principal!\nUmm, I'll go back to my room...\nI-I'm sorry!");
    Message_Who(0);
    Message_MsgDisp("主人公", "(Aaah, that was frightening...)");
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
