section "b04_m3_250"{
    int var0 = Date_GetDateOption(2, 77);
    if (var0 == 0){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_BH131_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_03_003_D00", 127, 40);
        Voice_PlayVoice("B0403250_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Although I cannot provide any sort\nof hospitality, please feel at home.");
        Message_MsgSel("Wow, what an amazing room!", "It has the feeling of a boyish room.", "H-How should I put it, it's a unique room.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403250_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Really?\nI am not that fussed about it, but\nthe main point is for the room to be\nfunctional.");
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
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403250_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes...\nYou mean that it is different to\nyour room.\nI can imagine it.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(3, 3, (#1), 1);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("B0403250_C00300", 3, "B0403250_C00301");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... ｛主人公｝.\nAre you implying something?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Background_Bg_GS2("BG_BH131_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_03_003_D00", 127, 40);
        Voice_PlayVoice("B0403250_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "You have been looking at that shelf\nfor some time now.\nDid you find something that was\ninteresting?");
        Message_MsgSel("So you've read this many books...", "... Do you have any photo albums?", "Is this your report card?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403250_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, it is a trifling matter, right?\nThere are books that I haven't read,\nbut I'm attached to them, so I can't\nthrow them out.");
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
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403250_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes... but not in here.\nWell, the photos are not a big deal.\nMy face has not really changed much.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(3, 3, (#1), 1);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("B0403250_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nDo not go looking at my things of\nyour own accord.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Background_Bg_GS2("BG_BH131_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_03_003_D00", 127, 40);
        Voice_PlayVoice("B0403250_C00800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... What? You are staring at me.\nIs there something on my face?");
        Message_MsgSel("Ah, I spaced out.", "I'm wondering what you're thinking.", "Should we play the staredown game?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403250_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "You such moments sometimes.\nIt is something that I do not know\nmuch about.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403250_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nAh, I am thinking that perhaps I\nshould get you something to drink.\nDo you prefer juice or black tea?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(3, 3, (#1), 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0403250_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nSorry that it is such a boring room.\nYou are bored of it, aren't you?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403250_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Ah, because we have nothing to do.\nShall we try?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh, really?\nIt was just a joke, though...");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0403250_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "The one who suggested it was you.\nNow, we are starting!");
                Message_Who(0);
                Message_MsgDisp("主人公", "O-Okay...");
                Character_ChFace(0, 7, 1);
                Voice_PlayVoice("B0403250_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", ".........");
                Message_Who(0);
                Message_MsgDisp("主人公", ".........");
                Character_ChFace(0, 0, 6);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0403250_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", ".........");
                Message_Who(0);
                Message_MsgDisp("主人公", ".........?");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(3, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403250_C01600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...! This is no good. I give up.\nEven though I thought it was a\nchance to get a good look at your\nface...");
                Voice_PlayVoice("B0403250_C01700", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Those...\nlong lashes, and those soft looking\ncheeks...\nThese idle thoughts are emerging one\nby one!!");
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0403250_C01800", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nThis isn't a game that high school\nmales and females should be playing.\nIt is extremely dangerous.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hikami＊＊｝...?)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_GlobalWork(5, 0, 1);
    }
