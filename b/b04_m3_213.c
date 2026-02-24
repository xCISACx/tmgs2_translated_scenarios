section "b04_m3_213"{
    int var0 = Date_GetDateOption(2, 65);
    if (var0 == 0){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_TR330_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403213_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "It is there.\nThat is the white tiger.");
        Message_MsgSel("Wah～. How rare!", "The blue of its eyes are beautiful.", "Even if it's white, a tiger is still a tiger!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403213_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes.\nApparently, there are only around\n200 in the world.\nI am glad that I could observe it\nfrom a short distance.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403213_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, definitely.\nThe blue of its eyes, and the pink\nof its nose and paws, this really is\na special species.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(3, 2, (#1), 1);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("B0403213_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... Obviously.\nThere are more things that you\nshould be taking note of, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_TR330_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403213_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "The white tiger is a species that\nyou cannot see in the wild anymore.");
        Message_MsgSel("We must take care in raising them!", "We're not letting it back into the wild.", "Don't think about such things, and just look.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403213_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, right.\nThat is not just with breeding, I\nwant us visitors to have the same\nattitude.");
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
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403213_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "There are unknown ones out there,\noutside of the zoos...\nThis is quite a difficult problem.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0403213_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Since we are here at the zoo, what\nwill you do if you do not learn\nabout animals?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 3, 1);
        Background_Bg_GS2("BG_TR330_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403213_C00800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nIt has been circling around the same\narea for a while now.");
        Message_MsgSel("Maybe its interested in it's own tail?", "You see all felines behave like that.", "Isn't it that guy's way of playing?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403213_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Is that why it is moving like that?\n... Ah, it is like a cat.");
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
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403213_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... That certainly may be so.\nAs it is called a white tiger, it\nmeans that it is related to the cat.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(3, 3, (#1), 1);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0403213_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nSince when did it become \"that guy\"?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403213_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nBecause we have come to see the\nwhite tiger many times, you feel a\nsense of affinity with it, huh.");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403213_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "And calling such a large wild animal\n\"that guy\"...\nHahaha!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Geez, ｛Hikami＊＊｝...");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403213_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Eh? ... Ah, sorry.\nI did not mean to make fun of you.\nRather...");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403213_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nI thought that you even approach\nanimals with a kind heart.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Hikami＊＊｝...");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403213_C01600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "When I am with you...\nI feel like my heart becomes\ncalm....\nNo, it probably does become calm.");
                Voice_PlayVoice("B0403213_C01700", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "That is probably why I wish to be\ntogether with you...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hikami＊＊｝...?)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
