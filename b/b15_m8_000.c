section "b15_m8_000"{
    int var0;
    Background_CarBGOpen2("BG_EX170_AU_2");
    Background_CarBGScroll(0);
    Background_CarBGScroll(#1);
    Background_CarBgSpeedChange(#8, 8);
    var0 = Parameter_GetSysParam(4);
    switch (var0){
        case 0:
        Still_Event("EV_08_31", #1, 0, 1);
        break ;
        case 1:
        Still_Event("EV_08_32", #1, 0, 1);
        break ;
        case 2:
        Still_Event("EV_08_33", #1, 0, 1);
        break ;
        case 3:
        Still_Event("EV_08_34", #1, 0, 1);
        break ;
        }
    System_Wait(5);
    Screen_WipeIn(3);
    Still_StillFace(0, 0, 1);
    Still_StillFace(0, 2, 2);
    Still_StillFace(0, 3, 3);
    Still_StillFace(0, 6, 0);
    Still_StillFace(0, 4, 0);
    Voice_PlayVoice("XD_08_00_H00000", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "You really like skinship.");
    Message_Who(0);
    Message_MsgDisp("主人公", "... Is it a bother to you?");
    Still_StillFace(0, 0, 2);
    Still_StillFace(0, 6, 0);
    Still_StillFace(0, 4, 0);
    Voice_PlayVoice("XD_08_00_H00100", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Not a bother...\nWell, more like it's dangerous.");
    Still_StillFace(0, 0, 2);
    Still_StillFace(0, 6, 0);
    Still_StillFace(0, 4, 0);
    Voice_PlayVoice("XD_08_00_H00200", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "For the car and you.");
    Message_Who(0);
    Message_MsgDisp("主人公", "And to Masaki-senpai, too?");
    Still_StillFace(0, 0, 2);
    Still_StillFace(0, 6, 0);
    Still_StillFace(0, 4, 0);
    Voice_PlayVoice("XD_08_00_H00300", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "... Yeah.");
    Still_StillFace(0, 0, 2);
    Still_StillFace(0, 6, 2);
    Still_StillFace(0, 4, 0);
    Voice_PlayVoice("XD_08_00_H00400", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "It's like my mind will go to weird\nplaces...");
    Message_Who(0);
    Message_MsgDisp("主人公", "Weird places...");
    Still_StillFace(0, 0, 6);
    Still_StillFace(0, 3, 1);
    Still_StillFace(0, 6, 0);
    Voice_PlayVoice("XD_08_00_H00500", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Crap! Forget what I said!");
    Still_StillFace(0, 0, 1);
    Still_StillFace(0, 6, 0);
    Still_StillFace(0, 4, 1);
    Voice_PlayVoice("XD_08_00_H00600", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Well, umm... It's not a bother.\nSo there's no need to stop.");
    Still_StillFace(0, 0, 1);
    Still_StillFace(0, 6, 0);
    Still_StillFace(0, 4, 1);
    Voice_PlayVoice("XD_08_00_H00700", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "But be careful.\nI mean that in many ways.");
    Message_Who(0);
    Message_MsgDisp("主人公", "(Masaki-senpai...)");
    }
