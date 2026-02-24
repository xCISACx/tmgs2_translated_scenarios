section "i25_m2_000"{
    Background_Bg_GS2("BG_AR200_?_0", 1, #1, 0);
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(2, "M2_??F", 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(2, 130) <= 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Shiba＊＊｝.\nAre you here shopping?");
        Voice_PlayVoice("I2502000_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... I just wanted to come in.\nDon't worry about me.");
        Message_Who(0);
        Message_MsgDisp("主人公", "I see.\nIt's still fun to just look, so take\nyour time.");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("I2502000_B00100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Yeah.");
        }
    else if (Parameter_GetCh1Param(2, 130) == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Shiba＊＊｝! What's up?");
        Voice_PlayVoice("I2502000_B00200", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Do you guys sell CDs with relaxing\nmusic?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hmm...\nIf you're looking for that, maybe\nit'd be better to go to a CD shop.");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(2, 3, (#1));
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("I2502000_B00300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", ".........");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Shiba＊＊｝?");
        Character_BlinkStart(2, 0, (#1));
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("I2502000_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Now that you mention it, you're\nright.\nI'll go check it out.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Shiba＊＊｝!");
        Character_Chara_GS2(2, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(He left...\nDid he make a genuine mistake?)");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Shiba＊＊｝! Welcome.\nWhat are you looking for?");
        Voice_PlayVoice("I2502000_B00500", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "I came here to see you.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh?");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(2, 3, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("I2502000_B00600", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... I'm not gonna get in your way.\nDon't worry about me.");
        Message_Who(0);
        Message_MsgDisp("主人公", "O-Okay... Take your time...");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(2, 86, 1);
    }
