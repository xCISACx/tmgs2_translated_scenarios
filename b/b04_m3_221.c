section "b04_m3_221"{
    int var0 = Date_GetDateOption(2, 66);
    if (var0 == 0){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_TR410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403221_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "They are displaying cultural assets\nand things used in their daily\nlives...\nThis is of great interest.");
        Message_MsgSel("They even have things in the textbook!", "I'm troubled as there are lots of things.", "Studying history is tiring.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403221_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes.\nThey are larger and more vivid than\nI thought.\nI keep making new discoveries here.");
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
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403221_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Is that not why they established a\nroute?");
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
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0403221_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "As we are learning about history,\nisn't that what gives coming here a\npurpose?\nYou say strange things.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 3, 1);
        Background_Bg_GS2("BG_TR410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403221_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "They have reproduced roof guards of\nthe castle's keep....\nThey have made them quite elaborate.");
        Message_MsgSel("Wah, what a majestic decorative ridge.", "Architecture back then was quite good.", "Eh, what a boring model.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403221_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "They are filled with wishes of\nwanting to ward off bad luck from\nthe castle.\nIt is one of the superstitions.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403221_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes!\nThe way of constructing the roof is\nunique to this castle.\nApparently, it took quite an effort\nto reproduce it.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0403221_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nBut I am looking at it with\nextremely great interest.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_TR410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403221_C00800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "The furnishings are quite splendid.\nSo the owner of the castle lived\nsurrounded by such things...");
        Message_MsgSel("Such elaborate craftsmanship.", "It's a little boastful.", "Which do you want, ｛Hikami＊＊｝?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403221_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, as expected of an influential\nperson.\nThey exhausted extravagance.\nThis sword's guard has coral affixed\non it.");
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
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403221_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Really?\nWell, the lord of this place was\nsupplanted by his retainer.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(3, 3, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0403221_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nThis is precious material, you know?\nI surely cannot look at these items\nthinking such things.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403221_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Right...\nIsn't that folding screen with the\ndrawing on it amazing?\nThe beach of that time is drawn onto\nit.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah... you're right!");
                Voice_PlayVoice("B0403221_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Even if the period is different,\nthese are people who lived here....\nThe owner of this castle perhaps\nliked the beach, too.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, surely...");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0403221_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I wonder if there was a day where he\nand his wife looked out at the ocean\ntogether...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Perhaps...");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403221_C01500", 3, "B0403221_C01501");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Right, ｛主人公｝.\nLet us go look at the ocean together\nnext time, and get the feel of a\nfeudal lord.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Eh?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hikami＊＊｝'s imagination\nis quite rich...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
