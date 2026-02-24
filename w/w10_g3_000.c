section "w10_g3_000"{
    Character_Chara_GS2(12, "G3_04F", 0);
    Background_Bg_GS2("BG_TR501_?_1", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("W1012000_L00000", #1, "");
    Message_Who(12);
    Message_MsgDisp("Nishimoto", "*Sigh* That was fun!\nI totally had fun. I'm satisfied!\nWe better get going!");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
