section "b04_m3_236"{
    int var0 = Date_GetDateOption(2, 72);
    if (Date_Date_Data(124) >= 4){
        Parameter_AddCh1Param(3, 61, 3);
        Parameter_AddCh1Param(3, 60, 2);
        Parameter_AddCh1Param(3, 62, #2);
        }
    else if (Date_Date_Data(124) == 3){
        Parameter_AddCh1Param(3, 61, 2);
        Parameter_AddCh1Param(3, 60, 1);
        Parameter_AddCh1Param(3, 62, #2);
        }
    else if (Date_Date_Data(124) == 2){
        Parameter_AddCh1Param(3, 61, 1);
        Parameter_AddCh1Param(3, 60, 0);
        Parameter_AddCh1Param(3, 62, #1);
        }
    else if (Date_Date_Data(124) == 1){
        Parameter_AddCh1Param(3, 61, 0);
        Parameter_AddCh1Param(3, 60, #1);
        Parameter_AddCh1Param(3, 62, 1);
        }
    else if (Date_Date_Data(124) == 0){
        Parameter_AddCh1Param(3, 61, #1);
        Parameter_AddCh1Param(3, 60, #2);
        Parameter_AddCh1Param(3, 62, 2);
        }
    if (var0 == 0){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_TR560_SU_2", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGB_071_000", 127, 40);
        Voice_PlayVoice("B0403236_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... Amazing. Radiant, even.");
        Message_MsgSel("It's like they came from a jewel box!", "I want to watch it forever...", "How much is the electricity bill?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403236_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I see.\nI cannot make that kind of\ncomparison since I am not concerned\nwith fashion accessories.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0403236_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "That is no good.\nIf we do not return home as soon as\nit is over, the exit will become\ncongested.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403236_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "There are thousands of light bulbs,\nso it would cost quite a lot.\nI wonder if we could do this at the\nCulture Festival...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_TR560_SU_2", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGB_071_000", 127, 40);
        Voice_PlayVoice("B0403236_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Even though all we are doing is\nlooking, it is interesting...");
        Message_MsgSel("It's like a reflection of the night sky.", "I also want to participate...", "The rides would be empty now.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403236_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes...\nIt may look like a bustling galaxy\nif you look at it from the sky.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0403236_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nI have never heard of them\nadvertising part-time jobs for the\nparade.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403236_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "That's certainly true, but you would\nfeel regret if you missed this.\nThey only hold the parade around\nthis time.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_TR560_SU_2", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGB_071_000", 127, 40);
        Voice_PlayVoice("B0403236_C00800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... I can see the end of the parade.");
        Message_MsgSel("Eh～. it's over already?", "It feels lonely when the parade is over.", "The last float is the most florid.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403236_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... You are like a child.\nSo that we do not regret it, let us\nwatch it so that it is burned into\nour memory.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(3, 3, (#1), 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0403236_C01000", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nNow that you say it, I feel lonely.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(3, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403236_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "......\nYes, now that you mention it, it is.\nThe fun day we had today will end\nwith this.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Hikami＊＊｝...");
                Character_BlinkStart(3, 0, (#1));
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403236_C01200", 3, "B0403236_C01201");
                Message_Who(3);
                Message_MsgDisp("Hikami", "But ｛主人公｝, you know\nthat the night parade is not just on\ntoday?");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(3, 3, (#1));
                Voice_PlayVoice("B0403236_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Let us...\ncome to watch it again, the t-two of\nus.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hikami＊＊｝...)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403236_C01400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes...\nIt was a parade that let the\naudience enjoy themselves until the\nvery end.\nIt seems like it will become a good\nmemory of today.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_GlobalWork(3, 0, 1);
    System_GlobalWork(5, 0, 1);
    }
