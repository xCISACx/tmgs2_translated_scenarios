section "b04_m5_202"{
    int var0 = Date_GetDateOption(2, 16);
    if (var0 == 0){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Background_Bg_GS2("BG_WF540_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405202_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Even though it's the same beach,\nit's really different to how it is\nin summer.");
        Message_MsgSel("I feel a little sentimental.", "I wonder if there are any sea urchins...", "That lovey-dovey couple looks warm.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 8);
            Character_BlinkStart(5, 3, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405202_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Right...\nA beach without any cute girls...\n*Sigh*");
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
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0405202_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Sea urchin season is in Summer, so\neven if there were they definitely\nwouldn't be yummy...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 4, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405202_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Maybe we should hug too, then▼ We'll\nsurely be warmer that way.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_WF540_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405202_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Wah, how awful.\nThis place is littered with garbage.");
        Message_MsgSel("... Should we clean up, then?", "It spoiled the scenery.", "Whoa, how dirty!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 4, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405202_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah.\nThis will also become one of our\namazing memories▼");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 9);
            Character_BlinkStart(5, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405202_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You're right...\nHow can people do this, even though\nthe beach is so pretty.");
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
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("", 5, "B0405202_E00700");
            Message_Who(5);
            Message_MsgDisp("Chris", "｛主人公｝, rest over\nthere.\nI'll pick up some garbage.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Background_Bg_GS2("BG_WF540_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405202_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Far, far away across the ocean is\nwhere I was born.");
        Message_MsgSel("How far...", "Isn't it in the opposite direction?", "Does it make you want to go back there?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405202_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Not that far.\nBoth my mom and dad go there on\nbusiness trips.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405202_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... Ah, maybe. I dunno.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0405202_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Why would it?\nI've been living here for a long\ntime now.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0405202_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Why would it?\nI've been living here for a long\ntime now.");
                Message_Who(0);
                Message_MsgDisp("主人公", "And you're also fluent in Japanese,\n｛Chris＊＊｝.");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(5, 2, (#1));
                Voice_PlayVoice("B0405202_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Like I was a native speaker.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Haha, yeah.");
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("B0405202_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I do like England, but if I had to\nchoose, I'd choose Japan, without a\ndoubt.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh, why is that?");
                Character_ChFace(0, 0, 6);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405202_E01500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "...\nBecause I'm listening to my heart.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Chris＊＊｝...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
