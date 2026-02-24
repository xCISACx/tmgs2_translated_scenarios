section "k01_m4_001"{
    Character_BlinkStart(4, 1, (#1), 1);
    Character_BlinkStart(4, 1, (#1), 2);
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    Background_Bg_GS2("BG_SC210_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(4, 130) <= 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Hariya＊＊｝.");
        Music_PlayBGM(0, "MN_C_04_002_D00", 127, 40);
        Character_Chara_GS2(4, "M4_01F", 0);
        Voice_PlayVoice("K0104000_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Ah? What?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Here! It's a birthday present.");
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 5);
        Voice_PlayVoice("K0104000_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Ah, thanks.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hey, why don't you open it?");
        }
    else if (Parameter_GetCh1Param(4, 130) == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Hariya＊＊｝.");
        Music_PlayBGM(0, "MN_C_04_002_D00", 127, 40);
        Character_Chara_GS2(4, "M4_01F", 0);
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("K0104000_D00200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Yo. What is it?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Here! It's a birthday present.");
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 4);
        Voice_PlayVoice("K0104000_D00300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "You remembered!");
        Voice_PlayVoice("K0104000_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Well, there's no way that you'd\nforget my birthday even if you\nwanted to!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hey, why don't you open it?");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Hariya＊＊｝!");
        Music_PlayBGM(0, "MN_C_04_002_D00", 127, 40);
        Character_Chara_GS2(4, "M4_01F", 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 5);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("", 4, "K0104000_D00500");
        Message_Who(4);
        Message_MsgDisp("Hariya", "｛主人公｝....\nWhat's with that face?\nYou look so happy.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Really? ... Here!\nIt's a birthday present.");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(4, 2, (#1));
        Character_ChFace(0, 3, 0);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("K0104000_D00600", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... Wh...");
        Voice_PlayVoice("K0104000_D00700", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Ah, crap! ... I'm grinning!");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("K0104000_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Anyway, thanks! ... Can I open it?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Sure!");
        }
    if (Parameter_GetCh1Param(4, 67) == 1){
        Character_ChFace(0, 2, 4);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("K0104000_D00900", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "This is what I wanted...\nYou're amazing!");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(4, 2, (#1));
        Voice_PlayVoice("K0104000_D01000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "This makes me happy. Thanks!");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(4, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yay, it looks like he's really\nhappy!)");
        Parameter_AddCh1Param(4, 61, 3);
        Parameter_AddCh1Param(4, 60, 2);
        Parameter_AddCh1Param(4, 62, #3);
        }
    else if (Parameter_GetCh1Param(4, 67) == 2){
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("K0104000_D01100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Oh, this is nice.\nIt seems like I'll be using it soon.\nThanks.");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(4, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah, it looks like he's relatively\nhappy.)");
        Parameter_AddCh1Param(4, 61, 1);
        Parameter_AddCh1Param(4, 60, 0);
        Parameter_AddCh1Param(4, 62, #1);
        }
    else if (Parameter_GetCh1Param(4, 67) == 3){
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(4, 3, (#1));
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("K0104000_D01200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", ".........");
        Message_Who(0);
        Message_MsgDisp("主人公", "... ｛Hariya＊＊｝?");
        Voice_PlayVoice("K0104000_D01300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I don't want to say it to you.\nLater.");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(4, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh...\nHe wasn't even a little happy about\nit...)");
        Parameter_AddCh1Param(4, 61, #1);
        Parameter_AddCh1Param(4, 60, #2);
        Parameter_AddCh1Param(4, 62, 2);
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(4, 86, 1);
    }
