section "b04_m2_071"{
    int var0 = Date_GetDateOption(2, 18);
    if (var0 == 0){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Background_Bg_GS2("BG_FP210_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402071_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Nice weather today...\nThe light from the sun looks white.");
        Message_MsgSel("The water surface is shining like a gem!", "I want to shower under the fountain.", "I hate the heat, and days like these...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402071_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Add that with the carps that are in\nthe pond and it'll look like a\nkaleidoscope.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402071_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Well, it would be fine if you were a\nkid, right?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0402071_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "You sound like an old person when\nyou say that...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_FP210_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402071_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "There are people in the water.\nIt's... elementary school kids.");
        Message_MsgSel("You should go too, ｛Shiba＊＊｝.", "I'll go join in, too!", "I feel cool just watching them.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 2, (#1), 1);
            Voice_PlayVoice("B0402071_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... I'll decline.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 3, (#1));
            Voice_PlayVoice("B0402071_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Go. I'll be going home.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402071_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah, it looks like it feels good.\nIt'd be nice if they made a pool at\nthis park.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(1);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 0, 11);
        Character_BlinkStart(2, 2, (#1));
        Background_Bg_GS2("BG_FP210_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402071_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Today is hotter than the other\ndays...\nIs your throat dry?");
        Message_MsgSel("It's so dry I might die...", "Should we drink the fountain water?", "Are you already exhausted?");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 2);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402071_B00900", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Tell me sooner then.\nIt's not something to endure, right?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402071_B01000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Why didn't you say anything?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh...?");
                Character_ChFace(0, 0, 8);
                Voice_PlayVoice("B0402071_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "What's gonna happen if you get\ndehydrated!?\nIt'd be too late by then, right!?");
                Message_Who(0);
                Message_MsgDisp("主人公", "U-Umm, I'm fine.\nI was just exaggerating.");
                Character_ChFace(0, 0, 3);
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("B0402071_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Ugh...");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(2, 2, (#1));
                Voice_PlayVoice("B0402071_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Are you really okay?\nYou don't feel sick?");
                Message_Who(0);
                Message_MsgDisp("主人公", "No, I'm fine. My throat...\nis actually dry, though.");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0402071_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "I see....\nI'll go buy you something to drink.\nGo wait in the shade over there.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay. Thanks, ｛Shiba＊＊｝.\nSorry for making you worry.");
                Character_ChFace(0, 0, 9);
                Character_ChFace(0, 3, 0);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0402071_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Yeah.");
                }
            break ;
            case 1:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402071_B01600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "You drink it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 11);
            Character_BlinkStart(2, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402071_B01700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "No, I'm not exhausted.\nYou're actually quite tough.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Environment_StopME(1, 40);
    System_Wait(60);
    }
