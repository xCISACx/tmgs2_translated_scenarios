section "l06_m8_000"{
    Background_Bg_GS2("BG_AR500_?_0", 1, #1, 0);
    if (System_GlobalWork(23, 1) == 8){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(8, "M8_01F", 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_08_000_D03", 127, 40);
        Voice_PlayVoice("FD_08_030_00000", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "You've worked hard.\nHere, it's a return gift for\nValentine's Day.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Wow, thank you very much!");
        Voice_PlayVoice("FD_08_030_00100", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "So, what did you get from him...\nOh, we'll talk about it later.\nWelcome!");
        Character_Chara_GS2(8, "NON");
        Music_StopBGM(0, 40);
        }
    else if (Parameter_GetCh1Param(8, 130) <= 2){
        Background_Bg_GS2("BG_AR500_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(8, "M8_01F", 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_08_000_D03", 127, 40);
        Voice_PlayVoice("", 8, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes?");
        Voice_PlayVoice("L0608000_H00000", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "This is for you.\nIt's a return gift for Valentine's\nDay.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, thank you very much.");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0608000_H00100", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Yeah.\nIt's cheap, so don't expect much,\nokay?\nOi, Arisawa～!");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(8, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(This is just out of obligation...\nisn't it?)");
        }
    else if (Parameter_GetCh1Param(8, 130) >= 3){
        Background_Bg_GS2("BG_AR500_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(8, 2, (#1));
        Character_ChFace(0, 4, 1);
        Character_Chara_GS2(8, "M8_01F", 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_08_000_D03", 127, 40);
        Voice_PlayVoice("L0608000_H00200", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Oi, got a sec?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Masaki＊＊｝.\nWhat is it?");
        Voice_PlayVoice("L0608000_H00300", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "... Here. Today is White Day, right?");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0608000_H00400", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Well, it's not much! Haha, hahaha...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Is it okay for me to accept it?\nThank you very much!");
        Voice_PlayVoice("L0608000_H00500", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Y-Yeah.");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(8, 3, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0608000_H00600", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Now then, back to work...");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(8, "NON");
        if (Parameter_GetCh1Param(8, 330) == 0){
            Message_Who(0);
            Message_MsgDisp("主人公", "Haha, a present, huh. What is it...?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(\"Dokuro Kuma Eye Mask\")");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Wow, it's cute...!\nI'll treasure it!)");
            Parameter_AddCh1Param(8, 330, 1);
            Parameter_AddPl1Param(22, #10);
            }
        else if (Parameter_GetCh1Param(8, 330) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "He gave me a present...\nI should open it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(\"Crystal Sun Catcher\")");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Wow, it's sparkling and pretty!\nI'll put it in my room when I get\nhome!)");
            Parameter_AddPl1Param(17, 10);
            Parameter_AddPl1Param(21, 5);
            }
        }
    Parameter_InCh1Param(8, 555, 0);
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(8, 86, 1);
    }
