section "k01_m3_001"{
    Character_BlinkStart(3, 1, (#1), 1);
    Character_BlinkStart(3, 1, (#1), 2);
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    Background_Bg_GS2("BG_SC210_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(3, 130) <= 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Hikami＊＊｝.");
        Music_PlayBGM(0, "MN_C_03_003_D00", 127, 40);
        Character_Chara_GS2(3, "M3_01F", 0);
        Voice_PlayVoice("", 3, "K0103000_C00000");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝.\nWalk in the corridors.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Right....\nToday is your birthday, isn't it?\nHere, it's a present!");
        Character_ChFace(0, 0, 11);
        Character_BlinkStart(3, 2, (#1));
        Voice_PlayVoice("K0103000_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "For me?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, take it!");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("K0103000_C00200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "You remembered. I'm opening it.");
        }
    else if (Parameter_GetCh1Param(3, 130) == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Hikami＊＊｝.");
        Music_PlayBGM(0, "MN_C_03_003_D00", 127, 40);
        Character_Chara_GS2(3, "M3_01F", 0);
        Voice_PlayVoice("", 3, "K0103000_C00300");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝.\nDo you need something from me?");
        Message_Who(0);
        Message_MsgDisp("主人公", "...\nToday is your birthday, isn't it?\nHere, it's a present!");
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("K0103000_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "For me? ... So you remembered.\nCan I open it?");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Hikami＊＊｝!");
        Music_PlayBGM(0, "MN_C_03_003_D00", 127, 40);
        Character_Chara_GS2(3, "M3_01F", 0);
        Voice_PlayVoice("", 3, "K0103000_C00500");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝.\nWhat is the matter? You're grinning.");
        Message_Who(0);
        Message_MsgDisp("主人公", "...\nToday is your birthday, isn't it?\nHere, it's a present!");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("K0103000_C00600", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... So you remembered.\nI appreciate the thought.\nSorry for making you go out to buy\nsomething.");
        Message_Who(0);
        Message_MsgDisp("主人公", "It's fine!");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("K0103000_C00700", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... Do you mind if I open it here?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Go ahead! Hurry up and open it!");
        }
    if (Parameter_GetCh1Param(3, 67) == 1){
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("K0103000_C00800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... This is...\nHow do you know what I want?");
        Voice_PlayVoice("K0103000_C00900", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "This is the best present. Thank you.\nI will treasure it.");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(3, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yay!\nIt looks like he's really happy!)");
        Parameter_AddCh1Param(3, 61, 3);
        Parameter_AddCh1Param(3, 60, 2);
        Parameter_AddCh1Param(3, 62, #3);
        }
    else if (Parameter_GetCh1Param(3, 67) == 2){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("K0103000_C01000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "This looks like it is easy to use.\nI appreciate your sentiment.");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(3, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah, it looks like he's relatively\nhappy.)");
        Parameter_AddCh1Param(3, 61, 1);
        Parameter_AddCh1Param(3, 60, 0);
        Parameter_AddCh1Param(3, 62, #1);
        }
    else if (Parameter_GetCh1Param(3, 67) == 3){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("K0103000_C01100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... This is... where I laugh?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Why?");
        Voice_PlayVoice("K0103000_C01200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nYou have no ill intentions, do you?\nThen I will accept your sentiment...");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(3, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, he left.\nIt looks like he's not that happy\nabout it...)");
        Parameter_AddCh1Param(3, 61, #1);
        Parameter_AddCh1Param(3, 60, #2);
        Parameter_AddCh1Param(3, 62, 2);
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(3, 86, 1);
    }
