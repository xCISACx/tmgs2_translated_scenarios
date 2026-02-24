section "b04_m3_212"{
    int var0 = Date_GetDateOption(2, 64);
    Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
    Background_Bg_GS2("BG_TR320_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (var0 == 0){
        Voice_PlayVoice("B0403212_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "They have got quite a few dogs and\ncats...\nI wonder if it is alright to put\nthem together.");
        Message_MsgSel("Wah, they're extremely cute▼", "Which do you like, ｛Hikami＊＊｝?", "They fight because they get along.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403212_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, they are like stuffed\ntoys......\nHey, come over here. Let me pet you.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403212_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I have never owned either, so I\ncannot say...\nAny is fine, if they can get\nattached to me.");
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
            Character_BlinkStart(3, 2, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0403212_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nIsn't that phrase not applicable to\ndogs and cats?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0403212_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nBoth dogs and cats will not let me\npet them.");
        Message_MsgSel("Maybe they're in a foul mood...?", "Maybe you look like their boss?", "... You're being avoided by them.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403212_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Really?\nBut even if they are, there are lots\nof dogs and cats around you.");
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
            Voice_PlayVoice("B0403212_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I see...\nEven at such a place like this, I\nexhibit the qualities of a leader.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0403212_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Why is that?\nEven though I am overflowing with\nthese feelings of wanting to fawn on\nthem!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0403212_C00800", 3, "B0403212_C00801");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... ｛主人公｝.\nDo you know how you can get dogs and\ncats to like you?");
        Message_MsgSel("You need to exude affection.", "Don't glare at them.", "Try throwing them some food?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403212_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, as expected! ...\nAlright, even I have such emotion.\nThey will definitely become attached\nto me.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0403212_C01000", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... I did not do such a thing.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0403212_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I see...\nI do not really come to visit them\noften, so maybe they are a little\nannoyed at me!");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("", 3, "B0403212_C01200");
                Message_Who(3);
                Message_MsgDisp("Hikami", "｛主人公｝.\nAre my eyes too sharp?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh? ......... Hmm.");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(3, 2, (#1));
                Voice_PlayVoice("B0403212_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I see, my eyes are still forceful.\nAlright then...");
                Character_ChFace(0, 2, 4);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403212_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "W-What about this?\nThey will come my way now, right?");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Hikami＊＊｝...");
                Character_BlinkStart(3, 1, (#1));
                Character_ChFace(0, 2, 4);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403212_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Is it still not enough?\nThen what about this?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hikami＊＊｝...\nYou're too funny...)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403212_C01600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nAlthough I feel that it is quite\ncowardly, you do make a good point.\nI will go with that as a last\nresort.");
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
    }
