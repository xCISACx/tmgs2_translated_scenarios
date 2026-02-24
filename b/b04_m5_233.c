section "b04_m5_233"{
    int var0 = Date_GetDateOption(2, 70);
    Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
    Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
    if (var0 == 0){
        Voice_PlayVoice("", 5, "B0405233_E00000");
        Message_Who(5);
        Message_MsgDisp("Chris", "｛主人公｝. How was it?");
        Message_MsgSel("I felt like a princess▼", "It was a little embarrassing.", "I wanted you to ride the white horse.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405233_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It's not a feeling, you are a\nprincess.\nYour smile was very cute▼");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(5, 3, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0405233_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... Really?\nI was having so much fun...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405233_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I'll ride the white horse next time\nthen, and come to your rescue▼");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0405233_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "The white horse is fine, but don't\nyou think the black horse is good,\ntoo?");
        Message_MsgSel("Then I'll ride the white horse.", "The black horse looks faster.", "I like the fawn colored horse...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405233_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "The white horse for the princess,\nand the black horse for the knight.\nYeah, let's do that next time▼");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0405233_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I'm not talking about racehorses,\nI'm talking about the horses on the\nmerry-go-round...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405233_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "F...Fawn colored???\nWhat color is that?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0405233_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Don't you think that they shouldn't\njust have horses, but bears and cows\nas well?");
        Message_MsgSel("Well, wouldn't that be far-fetched?", "It's not fit for a prince and princess.", "It'd be nice if it were like a zoo.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0405233_E00900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... It's undoubtedly a no-go?\nHow sad...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0405233_E01000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Eh...\nBut you could at least have cows,\nright?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Why?");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0405233_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "In the Heian period, princesses rode\non ox-drawn carts.");
                Message_Who(0);
                Message_MsgDisp("主人公", "But there was no other way to\ntravel.");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0405233_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Ah, I see.");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0405233_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Then... Then...");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0405233_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Uhh, I've got no ideas left～.\nIt's kinda annoying～.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Haha, ｛Chris＊＊｝ is so\nchildish.)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405233_E01500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I see... I'll revise my plan...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405233_E01600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Wouldn't it?\nIf I had the chance to design it,\nI'd wanna give it a shot.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
