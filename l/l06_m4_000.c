section "l06_m4_000"{
    Background_Bg_GS2("BG_SC302_?_0", 1, #1, 0);
    if (System_GlobalWork(23, 1) == 4){
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(4, "M4_01F", 0);
        Voice_PlayVoice("FD_04_030_00000", #1, "");
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_04_000_D02", 127, 40);
        Message_Who(4);
        Message_MsgDisp("Hariya", "Yo. This is a return gift.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, thanks.");
        Voice_PlayVoice("FD_04_030_00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Tell me what you got from him later.\nI'll determine if he's interested in\nyou or not.");
        Character_Chara_GS2(4, "NON");
        Music_StopBGM(0, 40);
        }
    else if (Parameter_GetCh1Param(4, 130) <= 2){
        Background_Bg_GS2("BG_SC302_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(4, "M4_01F", 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_04_000_D02", 127, 40);
        Voice_PlayVoice("L0604000_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Yo.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hariya＊＊｝.\nWhat's up?");
        Character_ChFace(0, 0, 6);
        Character_ChFace(0, 4, 0);
        Voice_PlayVoice("L0604000_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Here, it's a return gift from\nValentine's Day.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, thanks.");
        Character_ChFace(0, 0, 11);
        Character_BlinkStart(4, 3, (#1));
        Voice_PlayVoice("L0604000_D00200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Finished! Argh...\nI'll go rest at the rooftop.");
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("L0604000_D00300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Later.");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(4, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Hmm, this is just out of\nobligation.)");
        }
    else if (Parameter_GetCh1Param(4, 130) >= 3){
        Background_Bg_GS2("BG_SC302_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 0);
        Character_ChFace(0, 4, 1);
        Character_Chara_GS2(4, "M4_01F", 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_04_000_D02", 127, 40);
        Voice_PlayVoice("L0604000_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Yo.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hariya＊＊｝.\nWhat's up?");
        Character_BlinkStart(4, 3, (#1));
        Voice_PlayVoice("L0604000_D00500", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Here... take it!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh? This?");
        Character_BlinkStart(4, 0, (#1));
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("L0604000_D00600", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... It's thanks, for the chocolate.\nAnyway, don't ask about every little\nthing.\nIt's embarrassing...");
        Voice_PlayVoice("L0604000_D00700", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Later!");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(4, "NON");
        if (Parameter_GetCh1Param(4, 330) == 0){
            Message_Who(0);
            Message_MsgDisp("主人公", "(A present, huh. What is it...?)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(\"Specially Selected by Harry: Super\nRefreshing Throat Lozenges\")");
            Message_Who(0);
            Message_MsgDisp("主人公", "(A \"special selection\"!\nThey really look like they work...)");
            Parameter_AddCh1Param(4, 330, 1);
            Parameter_AddPl1Param(17, 5);
            Parameter_AddPl1Param(22, #5);
            }
        else if (Parameter_GetCh1Param(4, 330) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "He gave me a present...\nI should open it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(\"Silver Cross Bookmarker\")");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Wow, what an amazing bookmark...\nI'll treasure it!)");
            Parameter_AddPl1Param(16, 5);
            Parameter_AddPl1Param(18, 10);
            }
        }
    Parameter_InCh1Param(4, 555, 0);
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(4, 86, 1);
    }
