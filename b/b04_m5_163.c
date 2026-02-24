section "b04_m5_163"{
    int var0 = Date_GetDateOption(2, 47);
    if (var0 == 0){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 1);
        Background_Bg_GS2("BG_NE430_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405163_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "It's hard getting into the rhythm...");
        Message_MsgSel("Music games are fun!", "Can I take pictures of you dancing?", "Can you play, ｛Chris＊＊｝?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405163_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah.\nLet's do our best so that we don't\nlose.");
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
            Voice_PlayVoice("B0405163_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "When I'm a little better at it.\nThen we'll take the picture\ntogether▼");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0405163_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "As you can see...\nI gotta try harder.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE430_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405163_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Ah, I know this song!");
        Message_MsgSel("But your body isn't moving.", "This song isn't really popular.", "Playing songs you know are easier.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 1);
            Character_ChFace(1, 2, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405163_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Right...\nSuch painful, unrequited feelings...");
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
            Character_BlinkStart(5, 2, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0405163_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Really? Probably because it's slow.\nIt's a shame, because it's a good\nsong...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405163_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah.\nThat might be the trick to playing\nthis game well.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE430_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405163_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "The amount of times I've lost is\nslowly decreasing～.");
        Message_MsgSel("Even the pros are blue in the face!", "You're attracting attention.", "Do you want to try versus mode next time?");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0405163_E00900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Eh... There are pros here?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0405163_E01000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Haha...\nYou don't have to flatter me.");
                Message_Who(0);
                Message_MsgDisp("主人公", "I'm not. You've gotten much better.");
                Message_Who(0);
                Message_MsgDisp("主人公", "You're a hard worker,\n｛Chris＊＊｝.");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0405163_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... I'm glad.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Voice_PlayVoice("B0405163_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I'm really glad that there is\nsomeone who is watching me....\nThank you.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Chris＊＊｝...?");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("B0405163_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Let's play once more.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Sure!");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(5, 3, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405163_E01400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah, hey, cutie. I'll do my best.");
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
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(5, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405163_E01500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ehh, so that mode exists～.\nLet's both make love steps▼");
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
