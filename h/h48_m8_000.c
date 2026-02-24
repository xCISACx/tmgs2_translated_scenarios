section "h48_m8_000"{
    if (Parameter_GetCh1Param(2, 25) == 1){
        if (Parameter_GetCh1Param(8, 130) >= 4){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(8, "M8_??F", 0);
            Background_Bg_GS2("BG_SCA12_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("H4808000_H00300", 8, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "... Yo, ｛主人公｝.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("H4808000_H00400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Ah～... As I expected...");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Masaki＊＊｝!\nWhat do you mean by that...");
            Character_ChFace(0, 4, 0);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("H4808000_H00500", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "... What are you meant to do today?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh...\nCheer on the guys in the Baseball\nClub...");
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("H4808000_H00600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Correct....\nIs nervousness a part of cheering?");
            Message_Who(0);
            Message_MsgDisp("主人公", "... It's... not.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H4808000_H00700", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Correct, you get a silver star!");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("H4808000_H00800", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Think about things other than that\nwhen the game has ended, okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Yes!");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H4808000_H00900", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Good response. I'll see you later!");
            Character_Chara_GS2(8, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I feel at ease...\nYeah, I'll do my best to cheer!)");
            }
        }
    else {
        if (Parameter_GetCh1Param(8, 130) >= 4){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(8, "M8_??F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("H4808000_H00300", 8, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "... Yo, ｛主人公｝.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("H4808000_H00400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Ah～... As I expected...");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Masaki＊＊｝!\nWhat do you mean by that...");
            Character_ChFace(0, 4, 0);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("H4808000_H00500", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "... What are you meant to do today?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh...\nCheer on the Track and Field Club...");
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("H4808000_H00600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Correct....\nIs nervousness a part of cheering?");
            Message_Who(0);
            Message_MsgDisp("主人公", "... It's... not.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H4808000_H00700", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Correct, you get a silver star!");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("H4808000_H00800", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Think about things other than that\nwhen the game has ended, okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Yes!");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H4808000_H00900", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Good response. I'll see you later!");
            Character_Chara_GS2(8, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I feel at ease...\nYeah, I'll do my best to cheer!)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
