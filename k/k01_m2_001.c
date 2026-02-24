section "k01_m2_001"{
    Character_BlinkStart(2, 1, (#1), 1);
    Character_BlinkStart(2, 1, (#1), 2);
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    Background_Bg_GS2("BG_SC210_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(2, 130) <= 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Shiba＊＊｝.");
        Music_PlayBGM(0, "MN_C_02_002_D00", 127, 40);
        Character_Chara_GS2(2, "M2_01F", 0);
        Voice_PlayVoice("K0102000_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... What?");
        Message_Who(0);
        Message_MsgDisp("主人公", "This is a birthday present. Here!");
        Character_ChFace(0, 0, 11);
        Character_BlinkStart(2, 2, (#1));
        Voice_PlayVoice("K0102000_B00100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Ehh... Can I open it?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Sure!");
        }
    else if (Parameter_GetCh1Param(2, 130) == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Shiba＊＊｝.");
        Music_PlayBGM(0, "MN_C_02_002_D00", 127, 40);
        Character_Chara_GS2(2, "M2_01F", 0);
        Voice_PlayVoice("", 2, "K0102000_B00200");
        Message_Who(2);
        Message_MsgDisp("Shiba", "｛主人公｝.\nYou need something?");
        Message_Who(0);
        Message_MsgDisp("主人公", "This is a birthday present. Here!");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("K0102000_B00300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Ah... thanks. Can I open it?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, of course!");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Shiba＊＊｝!");
        Music_PlayBGM(0, "MN_C_02_002_D00", 127, 40);
        Character_Chara_GS2(2, "M2_01F", 0);
        Voice_PlayVoice("", 2, "K0102000_B00400");
        Message_Who(2);
        Message_MsgDisp("Shiba", "｛主人公｝.\nWhy are you in such a hurry?");
        Message_Who(0);
        Message_MsgDisp("主人公", "This is a birthday present. Here!");
        Character_ChFace(0, 0, 11);
        Character_BlinkStart(2, 2, (#1));
        Voice_PlayVoice("K0102000_B00500", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Birthday? ... You remembered.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah!");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("K0102000_B00600", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Is it okay for me to take it?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, of course!");
        }
    if (Parameter_GetCh1Param(2, 67) == 1){
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("K0102000_B00700", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... You know what I want.");
        Voice_PlayVoice("K0102000_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Thanks.... I'll treasure it.");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(2, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yay, it looks like he's really\nhappy!)");
        Parameter_AddCh1Param(2, 61, 3);
        Parameter_AddCh1Param(2, 60, 2);
        Parameter_AddCh1Param(2, 62, #3);
        }
    else if (Parameter_GetCh1Param(2, 67) == 2){
        Character_ChFace(0, 0, 11);
        Voice_PlayVoice("K0102000_B00900", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Ehh. Thanks.");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(2, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah, it looks like he's relatively\nhappy...\nmaybe.)");
        Parameter_AddCh1Param(2, 61, 1);
        Parameter_AddCh1Param(2, 60, 0);
        Parameter_AddCh1Param(2, 62, #1);
        }
    else if (Parameter_GetCh1Param(2, 67) == 3){
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("K0102000_B01000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", ".........");
        Message_Who(0);
        Message_MsgDisp("主人公", "... What's wrong?");
        Voice_PlayVoice("K0102000_B01100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... You've got some good interests.\nI'll accept this.");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(2, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, he left...\nIt looks like he's not that happy\nabout it...)");
        Parameter_AddCh1Param(2, 61, #1);
        Parameter_AddCh1Param(2, 60, #2);
        Parameter_AddCh1Param(2, 62, 2);
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(2, 86, 1);
    }
