section "b04_m2_031"{
    int var0 = Date_GetDateOption(2, 4);
    if (var0 == 0){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 0, 11);
        Background_Bg_GS2("BG_WF310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_310_000", 127, 40);
        Voice_PlayVoice("B0402031_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Ehh... There's a variety of fish.");
        Message_MsgSel("It's as if it were Ryuujin's Palace!", "Ah, they are beautiful fish!", "This is sashimi heaven!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402031_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "If there really was one, it might be\nsimilar to this.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402031_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah.\nThe light is shining on the fish\nfrom various angles, so it looks\nlike a rainbow.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402031_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nEven if you think that, don't say\nit.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_WF310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_310_000", 127, 40);
        Voice_PlayVoice("B0402031_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... What? This fish...\nis transparent, and looks like it\nhas wings.\nIt even has a horn.");
        Message_MsgSel("Isn't it related to the sea hare?", "It's called a clione.", "It's a messenger from outer space.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0402031_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Don't say random things.\nEven I know what a sea hare is.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 11);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402031_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Ah... I've heard of them....\nOi, there's something coming out\nfrom its head.\nWhat was that?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_BlinkStart(2, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402031_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Well, it definitely feels that\nway....\nClione?\nEven its name sounds\nextraterrestrial.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 0, 11);
        Background_Bg_GS2("BG_WF310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_310_000", 127, 40);
        Voice_PlayVoice("B0402031_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... It's a dugong.\nIt's massive and has a lot of power.");
        Message_MsgSel("It looks just like a mermaid.", "... How cute!", "It looks like you, ｛Shiba＊＊｝!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402031_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Just like a mermaid?\nDo you mean that their tails look\nsimilar?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Character_ChFace(1, 7, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402031_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "They show love through their facial\nexpressions....\nDoesn't it look more like you?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 8);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0402031_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nDo you mean because it's massive?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402031_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Well, it is huge.");
                Message_Who(0);
                Message_MsgDisp("主人公", "No, that's not what I meant.");
                Message_Who(0);
                Message_MsgDisp("主人公", "They somehow have this sense of\nsecurity about them...\nOr should I say that they have this\ngentle kind of feeling...");
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0402031_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... I do? Don't say weird things.");
                Message_Who(0);
                Message_MsgDisp("主人公", "I don't think it's weird, though...");
                Character_ChFace(0, 0, 6);
                Character_BlinkStart(2, 2, (#1));
                Voice_PlayVoice("B0402031_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... More weird stuff.");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
