section "b04_m3_146"{
    int var0 = Date_GetDateOption(2, 41);
    Background_Bg_GS2("BG_NE270_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "SS_DSE_100_000");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    if (var0 == 0){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_MsgSel("That discussion was the best!", "That discussion was so-so.", "That discussion was disappointing.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(3, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403146_C00000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, it was quite a splendid talk.\nI felt that I understood the art of\ncaptivating people.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(3, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403146_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, what was being talked about was\nnot such a big deal.\nBut their art of conversation was\nsplendid.");
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
            Voice_PlayVoice("B0403146_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... Really?\nI was able to enjoy myself quite a\nbit.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403146_C00300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nThis story was scarier than the\nprevious.\nDid you find it alright?");
        Message_MsgSel("I might not be able to sleep tonight...", "I had to block my ears for most of it...", "Your eyes were wide open.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403146_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Haha, you were tricked by him.\nIn any case, it seems like there are\nmany people who talk about the same\nthings as he does.");
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
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403146_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... Was it that scary?\nBut I feel like it was a bit of a\nwaste to not hear such stories.");
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
            Character_BlinkStart(3, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0403146_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "......... You too.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403146_C00700", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nThere were also people who were\ncrying.\nThe way he spoke got colder and\ncolder.");
        Message_MsgSel("Every time I hear it, I get the chills.", "... It was lacking this time.", "Lend me your hanky, ｛Hikami＊＊｝.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403146_C00800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "That is true.\nI want to be able to pull the\naudience in with my conversation\nlike that.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0403146_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... Is that so?\nIt seems like our values are\ndifferent.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0403146_C01000", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "You did not bring yours with you?\nPrepare yourself properly.... Here.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 4);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0403146_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Eh... you were also crying!?\nSorry, I did not notice.\nMy handkerchief, my handkerchief...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ugh... It was so scary～!");
                Voice_PlayVoice("B0403146_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Come on, wipe away those tears!");
                Message_CloseMsg();
                Screen_WipeOut(2);
                System_Wait(30);
                Screen_WipeIn(2);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(3, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0403146_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... Are you okay?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay... I'm fine now.\nSorry for surprising you.");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403146_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "No, it's not something to apologize\nfor....\nAt any rate, he is a really severe\nperson, Inamura Jouji.");
                Message_Who(0);
                Message_MsgDisp("主人公", "...?");
                Voice_PlayVoice("B0403146_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Because his ghost story made you\ncry.\nI am a bit... envious.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403146_C01600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Ah, it is just...\nI mean that he is skillful in the\nart of conversation.\nI do not mean anything else.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hikami＊＊｝...?)");
                }
            break ;
            }
        }
    }
