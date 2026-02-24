section "i65_m2_000"{
    if (Parameter_GetCh1Param(2, 130) <= 2){
        Background_Bg_GS2("BG_AR600_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(2, "M2_??F", 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Shiba＊＊｝.");
        Voice_PlayVoice("I6502000_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Working?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah.\nAre you going out,\n｛Shiba＊＊｝?");
        Character_BlinkStart(2, 3, (#1));
        Voice_PlayVoice("I6502000_B00100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Yeah. Later.");
        Character_Chara_GS2(2, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Now, I should put in more effort!)");
        }
    else if (Parameter_GetCh1Param(2, 130) == 3){
        Background_Bg_GS2("BG_AR600_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "Thank you very much!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Huh. That person over there is...\n｛Shiba＊＊｝?)");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Shiba＊＊｝! What's up?");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(2, "M2_??F", 0);
        Voice_PlayVoice("I6502000_B00200", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "You look busy.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah. Especially today...\nAh, welcome!");
        Character_ChFace(0, 2, 5);
        Character_BlinkStart(2, 3, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("I6502000_B00300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "I'm in your way. Later.");
        Character_Chara_GS2(2, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(He left...\nI wonder if he was on his way\nsomewhere?)");
        }
    else {
        Background_Bg_GS2("BG_AR600_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(2, "M2_??F", 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 2, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Shiba＊＊｝! What's up?");
        Character_ChFace(0, 0, 10);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("I6502000_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Nothing...\nI came here to see how you were\ndoing.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Me?");
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(2, 3, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("I6502000_B00500", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "...\nIs there anyone else here I know?");
        Message_Who(0);
        Message_MsgDisp("主人公", "... Uhh...");
        Character_ChFace(0, 2, 5);
        Character_BlinkStart(2, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("I6502000_B00600", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Don't be half-assed. Later.");
        Character_Chara_GS2(2, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Alright, I'll do my best!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(2, 86, 1);
    }
