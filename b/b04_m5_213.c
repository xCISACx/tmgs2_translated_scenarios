section "b04_m5_213"{
    int var0 = Date_GetDateOption(2, 65);
    Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
    Background_Bg_GS2("BG_TR330_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (var0 == 0){
        Voice_PlayVoice("B0405213_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Ah, there it is! There it is!");
        Message_MsgSel("Wah～. How rare!", "The blue of its eyes are beautiful.", "Even if it's white, a tiger is a tiger!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405213_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It's my first time seeing the real\nthing...\nIt really is white.");
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
            Message_PauseSkinship();
            Voice_PlayVoice("B0405213_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah. It's like marbles.\nIt's real mysterious.");
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
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0405213_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Well, that's true... Hmm...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0405213_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "When I look at it from here, it\nlooks like a massive cat.");
        Message_MsgSel("I wonder if catnip works on it.", "I want to try rubbing its neck area.", "The sound it makes is completely different.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_BlinkStart(5, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405213_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Maybe, since it's a feline.\nAn absent-minded tiger...\nI wanna see that.");
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
            Voice_PlayVoice("B0405213_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I wonder if it would fawn on you if\nyou rustled its fur...\nI really wanna do that～.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0405213_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It seems like it... How cold...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0405213_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Why does it get special treatment?\nBecause it's a different color?");
        Message_MsgSel("Because it has a god-like aura.", "We should treat it the same as other tigers!", "We have to because it's a precious tiger.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405213_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It might give you good luck if you\ngo and see it or something like\nthat.\nLet's burn its image into our\nbrains.");
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
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405213_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "There's an explanation here..\nIt says there are only a few\nthousand in the world.\nIt's definitely a precious animal.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0405213_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It can't just be because it looks\nlike a precious tiger...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("B0405213_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", ".........");
                Message_Who(0);
                Message_MsgDisp("主人公", "What's wrong?");
                Character_BlinkStart(5, 2, (#1));
                Voice_PlayVoice("B0405213_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Something just came to my mind.");
                Message_Who(0);
                Message_MsgDisp("主人公", "???");
                Character_BlinkStart(5, 2, (#1));
                Voice_PlayVoice("B0405213_E01500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It kinda...\nseems like it'll be accepted, so I'm\nhappy～.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Do you perhaps think that way\nbecause you are a foreigner?\nI'm sure that everyone at school\nthinks of you as an equal.");
                Character_ChFace(0, 4, 0);
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0405213_E01600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Yeah... that kinda thing....\nI get the feeling that it'd be nice\nif I got more special treatment.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Haha.\nThen maybe you should go around\nasking people to do that for you.");
                Character_ChFace(0, 7, 0);
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0405213_E01700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Ah, it was a lie. I'm kidding....\nThings are fine the way they are.\nSo please continue to treat me well.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Same here!");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
