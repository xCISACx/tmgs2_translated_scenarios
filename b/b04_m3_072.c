section "b04_m3_072"{
    int var0 = Date_GetDateOption(2, 20);
    if (var0 == 0){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_FP220_SP_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403072_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... The lawn is nice and lush.\nWalking along the avenue of trees\nwhen new leaves are sprouting is\nperfect.");
        Message_MsgSel("Look, there's a butterfly flying!", "It seems like napping here would be nice.", "We must be wary of UV Rays!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403072_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, it is a Small Cabbage White....\nThat means that cabbageworms may be\nnearby.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0403072_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nAnd when you wake up, the sun will\nbe setting, and the temperature will\ndrop.\nThat is how you catch colds in\nspring.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403072_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "That is right.\nUV rays are the strongest in May and\nJune.\nEven though it is spring, we must\nnot make light of it.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_FP220_SP_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403072_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I wonder what kind of flowers are\nblooming in the lawn...\nWhat is that?");
        Message_MsgSel("It's Red Clover.", "It's a mutation of White Clover.", "It's just weeds.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403072_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Right!\nYou must have quite a sharp mind,\nfor the answer to come to you right\naway.");
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
            Message_PauseSkinship();
            Voice_PlayVoice("B0403072_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "No... I have remembered.\nThat is a special variant of White\nClover.\nIt is called \"Red Clover\".");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0403072_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nSo you treat any small plant as a\nweed.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_FP220_SP_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403072_C00800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "There are a lot of parents and\nchildren.\nWhen I was child, I used to come\nhere with my family.");
        Message_MsgSel("It's a place we have memories of.", "It's important to have such places.", "Even you came here, ｛Hikami＊＊｝?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403072_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes.\nI have a memory of spreading a\nblanket on the lawn and all of us\nreading our own books.\nIt is not a significant memory.");
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
            Character_ChFace(1, 0, 3);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403072_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, you could also call it a spot\nthat promotes healthy human\nrelations.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 8);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0403072_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... Of course I did.\nI was a well-behaved child who was\nnot troublesome.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0403072_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Hey, you...\nIs it not obvious that I had a pure\nchildhood?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Y-Yeah... But I can't imagine it...");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0403072_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I see...\nWell, even though I have grown,\npeople say that I have not changed.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hmm, is that so?");
                Character_ChFace(0, 0, 3);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403072_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Yes.\nEven now I am keeping an eye out for\nadults who do not know how to\nseparate garbage from recycling.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Haha, that's typical of you,\n｛Hikami＊＊｝.");
                Voice_PlayVoice("B0403072_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Really?\nWhen I usually talk about such\nthings, people respond with \"Ehh\"...");
                Character_ChFace(0, 0, 10);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403072_C01600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "So you do not say such things.\nI am somewhat... glad.\nYou understand me.");
                Message_Who(0);
                Message_MsgDisp("主人公", ".........");
                Character_BlinkStart(3, 2, (#1));
                Voice_PlayVoice("B0403072_C01700", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "It seems like I can talk to you\nabout many things...\nI do not get this feeling often.");
                Character_BlinkStart(3, 0, (#1));
                Voice_PlayVoice("B0403072_C01800", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Let us walk and talk for a little\nwhile longer....\nIs that okay?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, of course!");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
