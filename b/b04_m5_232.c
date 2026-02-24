section "b04_m5_232"{
    int var0 = Date_GetDateOption(2, 69);
    Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
    Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
    if (var0 == 0){
        Voice_PlayVoice("B0405232_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "That was an amazing walk through the\nsky.");
        Message_MsgSel("I'm glad we enjoyed the view with ease!", "I got sleepy because it was so easygoing.", "The couple behind us was something else.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405232_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I could see really far off into the\ndistance.\nIt's probably because the weather\nwas nice.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(5, 3, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405232_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah, I saw.\nSeeing you wake up was also kinda\ncute▼");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0405232_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You were watching that?\nThey finally got some time to\nthemselves, but you watched them...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0405232_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "The sky was mysterious, with the\nrays of sunlight coming from in\nbetween the clouds.");
        Message_MsgSel("Did it make you want to paint?", "That's a common way of expressing it.", "Didn't it feel like an angel had descended?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405232_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Hmm.\nRather than painting, I wanted to\nwatch it instead.\nAh, but I did get some inspiration.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0405232_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Uh... Sorry...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(5, 3, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405232_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah.\nRight in front of my eyes▼");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0405232_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "I wonder what it would be like at\nnight time...");
        Message_MsgSel("Let's come at night, next time.", "The scenery would be completely different.", "It'd surely be boring.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_ChFace(1, 4, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405232_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Really?\nThen we'd have a date in the starry\nsky.\nWhat an amazing feeling▼");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405232_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Is it different to seeing the stars\nfrom ground level?\nIt'd surely be pretty～.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0405232_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "But I think that the scenery at\nnight would be pretty, though...\nI wonder if it'd be boring...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0405232_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "\"Surely\"...\nmeaning that you haven't actually\nseen it?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Y-Yeah.");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405232_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "...\nI think that it's bad to say things\nlike \"I can't do it\" or \"It's\nboring\", before you actually do it.");
                Voice_PlayVoice("B0405232_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Even though you might make something\nof it, isn't it a waste for you to\nshut out such things?");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Maybe.");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405232_E01500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "See?");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0405232_E01600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "So let's ride the Ferris Wheel.\nOf course, it would just be the two\nof us▼");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, was that what you were aiming\nfor?");
                Character_BlinkStart(5, 0, (#1));
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405232_E01700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Wah, busted.\nLet's keep it a secret from others.\nNow then, let's go.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(He smiled at the end...\nBut ｛Chris＊＊｝ had a\nreally serious face...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
