section "b04_m5_032"{
    int var0 = Date_GetDateOption(2, 5);
    if (var0 == 0){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_WF320_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_320_000", 127, 40);
        Voice_PlayVoice("B0405032_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "So these orcas are that used to\nbeing around people.");
        Message_MsgSel("I want to try riding on its back.", "It had appeal.", "It's also called a \"killer whale\".");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405032_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah, I want to as well.\nDoesn't it seem like it would feel\ngood?");
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
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405032_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah.\nThe most amazing thing was when they\nall jumped at once.");
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
            Character_BlinkStart(5, 2, (#1), 1);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("B0405032_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Another name? ...\nAh, you mean that they have two\nnames?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 0, 10);
        Background_Bg_GS2("BG_WF320_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_320_000", 127, 40);
        Voice_PlayVoice("B0405032_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "They were cute...\nI want to keep one at home.\n(NB: Chris uses the word 匹, which is\nused to count small animals)");
        Message_MsgSel("Such a big thing would be a hindrance.", "You use 頭 to count large animals.", "I wonder how much food costs for a month.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0405032_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "That might be so, but that's...\nso sad...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405032_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah, really?\nAs expected, Japanese is difficult.\nThanks, I learned something.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 11);
            Character_BlinkStart(5, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405032_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "They'd eat heaps, wouldn't they? ...\nIt says here that they eat 300kg a\nday!\nWhat gluttons...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_WF320_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_320_000", 127, 40);
        Voice_PlayVoice("B0405032_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Even though they don't have wings,\nthey can jump quite well.");
        Message_MsgSel("The strength of their fins are amazing.", "There are birds with wings that can't fly.", "But humans can fly even without wings?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 1);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405032_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah, if you got hit by one of\nthose, you'd surely be helpless.\nIt looks like it'd hurt heaps～.");
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
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405032_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Right.\nIf penguins or ostriches could fly\nwith those, it'd be amazing.");
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
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405032_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Humans can use tools.\nSo isn't it different?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405032_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Humans can use tools.\nSo isn't it different?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, right...");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0405032_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "But if they don't know how to use\nthose tools, then they can't fly.");
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("B0405032_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Even though everyone has the chance\nto learn it, I feel that there are a\nlot of people who don't...");
                Character_BlinkStart(5, 0, (#1));
                Voice_PlayVoice("B0405032_E01500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Don't you think that that's a waste?");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Chris＊＊｝...?");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0405032_E01600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... Ah～.\nEven I have no clue about what I\njust said.");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0405032_E01700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I can't do things that are not like\nme～.\nIt's nothing. Sorry.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I got the feeling that\n｛Chris＊＊｝ was different\nto his usual self...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
