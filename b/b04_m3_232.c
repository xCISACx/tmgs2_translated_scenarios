section "b04_m3_232"{
    int var0 = Date_GetDateOption(2, 69);
    if (var0 == 0){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0403232_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "We could see everything around us\nquite well because of the nice\nweather.\nI am glad we rode it.");
        Message_MsgSel("I'm glad we enjoyed the view with ease!", "I got sleepy because it was so easygoing.", "The couple behind us was something else.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403232_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Right!\nIt was still good watching the view\nwith the angle changing slowly.");
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
            Character_BlinkStart(3, 3, (#1), 2);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403232_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... I see.\nIt is no wonder that even though I\ntalked to you, you barely responded.");
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
            Voice_PlayVoice("B0403232_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... What were you looking at?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0403232_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "It seems like the ferris wheel has a\nhistory of over 100 years.\nIt has always been taken over by\nmore popular things.");
        Message_MsgSel("Hmm, you know a lot about this.", "The people of the past also enjoyed the view.", "Ferris wheels will always be around.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403232_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I just happened to read something\nabout it.\nI remembered it because it left a\ndeep impression.");
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
            Voice_PlayVoice("B0403232_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, perhaps.\nAlthough the atmosphere of the view\nthat they saw would perhaps be\ndifferent.");
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
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0403232_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nI did not say such extreme things.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 5);
        Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0403232_C00800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Apparently there is a ferris wheel\nin England that can hold around 25\npeople in one cable car.");
        Message_MsgSel("Hmm, it's probably for groups.", "That would be a really massive ferris wheel.", "I kind of don't want to ride it.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403232_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Right, it is a massive ferris wheel\nin a sight-seeing area.\nThe scale of the line also seems\nlarge.");
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
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(3, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403232_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Apparently, the height is 135\nmetres.\nI wonder what kind of scenery you\ncan enjoy at that height.");
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
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0403232_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I see...\nI want to try riding it, though.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0403232_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nI thought that it might be fun,\nthough.\nI see, so it did not attract your\ninterest.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Hikami＊＊｝...");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(3, 3, (#1));
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0403232_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "......... Wait, Ah...... I see.");
                Message_Who(0);
                Message_MsgDisp("主人公", "What's wrong?");
                Character_ChFace(0, 0, 3);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("", 3, "B0403232_C01400");
                Message_Who(3);
                Message_MsgDisp("Hikami", "｛主人公｝.\nI realized when you first said it,\nthe fact that you dislike large\ncable cars.");
                Voice_PlayVoice("B0403232_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "They lack the feeling of benefit,\nlike the kind of ferris wheel you\nand I rode.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Feeling of benefit...?");
                Voice_PlayVoice("B0403232_C01600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nWe are not just able to enjoy the\nscenery, but also the feeling that\nthis is our own secret space.");
                Message_Who(0);
                Message_MsgDisp("主人公", ".........");
                Character_ChFace(0, 0, 11);
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403232_C01700", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Ah, no!\nSorry for saying strange things.\nIt was fun riding the ferris wheel\nwith you...");
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
