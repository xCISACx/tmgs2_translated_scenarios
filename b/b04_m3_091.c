section "b04_m3_091"{
    int var0 = Date_GetDateOption(2, 25);
    if (var0 == 0){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 0, 3);
        Background_Bg_GS2("BG_FP410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_FP_410_000", 127, 40);
        Voice_PlayVoice("B0403091_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Artifacts from Habataki City, huh...\nThey discovered things from quite an\nancient period.");
        Message_MsgSel("Somehow, it feels really historic...", "The designs of the past are interesting!", "This clay figure looks like you.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403091_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Right.\nEven though the period is different,\nit is like I can hear the breathing\nof the people who once lived here...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403091_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Really?\nAlthough I do not know much about\ndesign, it definitely is a shape\nthat you would not see today.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0403091_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... Is that so.\nClay figures were originally\nmodelled after women, so it should\nlook like you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 0, 3);
        Background_Bg_GS2("BG_FP410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_FP_410_000", 127, 40);
        Voice_PlayVoice("B0403091_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... The exhibition is different.\nThis time it is the Sengoku Period.");
        Message_MsgSel("They have a princess' trousseau.", "That helmet looks like you.", "That scarlet threaded armor is so elegant.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403091_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, you are right....\nEverything in this collection is\nfinely detailed.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0403091_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... That common soldier's hat?\nI at least wanted you to compare me\nto a helmet of a military commander.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403091_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, there is red embroidery...\nWhat is more shocking is that you\nknow about armor.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 0, 3);
        Background_Bg_GS2("BG_FP410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_FP_410_000", 127, 40);
        Voice_PlayVoice("B0403091_C00800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Every time we come here, the\nexhibition changes.\nThe current exhibition is about the\nculture of people from the Edo\nperiod.");
        Message_MsgSel("Wah, a cute kimono!", "Ah, a love letter▼", "It's preserved nicely.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403091_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nAlthough it is simplistic, it seems\nlike that pattern is still used\ntoday.\nPeople still wear that kind of\npattern.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403091_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, it looks the same as how I saw\nit in a textbook!\nWhat is good about museums is that\nwe can observe the finer details.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(3, 3, (#1), 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0403091_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nAlthough it is an example of\nculture, the explanation says that\ndisplaying the letter would be rude\nto the sender.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0403091_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Eh......?\nThey are even showing things such as\nthis?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, it says a young boy studying\nWestern culture wrote it to a\ngirl....\nI wonder what is written?");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0403091_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I will try translating it...\n\"I will always keep the feelings in\nmy heart to myself\"...");
                Voice_PlayVoice("B0403091_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "\"Every time I see you, it seems like\nI would be overcome with words\nexpressing how much I long for\nyou\"...");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Wah, my heart is beating faster!");
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0403091_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "\"I cannot live just being charmed by\nyou, knowing you, or without being\nable to tell you.\"\n............ Stop!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh......?\nWhat's wrong, ｛Hikami＊＊｝?");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403091_C01600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nI really understand the feeling of\nthe sender.\nI am sorry for reading this aloud!");
                Voice_PlayVoice("B0403091_C01700", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "He...\nhe only wanted for her to read this\nletter...\nSo I will abide by that.");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(3, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403091_C01800", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nNo matter what period it is,\nfeelings remain the same.\nI want to believe that two people\ncan be in love...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(... ｛Hikami＊＊｝?)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
